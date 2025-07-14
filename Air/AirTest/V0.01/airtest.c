#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_VARS 100

// Estrutura para armazenar variáveis
typedef struct {
    char name[32];
    char value[128];
} Variable;

Variable vars[MAX_VARS];
int varCount = 0;

// Função para salvar uma variável
void setVar(const char* name, const char* value) {
    for (int i = 0; i < varCount; i++) {
        if (strcmp(vars[i].name, name) == 0) {
            strcpy(vars[i].value, value);
            return;
        }
    }
    strcpy(vars[varCount].name, name);
    strcpy(vars[varCount].value, value);
    varCount++;
}

// Função para obter valor de uma variável
const char* getVar(const char* name) {
    for (int i = 0; i < varCount; i++) {
        if (strcmp(vars[i].name, name) == 0) {
            return vars[i].value;
        }
    }
    return NULL;
}

// Remove aspas de uma string
int stripQuotes(char* str) {
    int len = strlen(str);
    if (str[0] == '"' && str[len - 1] == '"') {
        str[len - 1] = '\0';
        memmove(str, str + 1, len - 1);
        return 0;
    }else{
        printf("Aspas de string não encontradas. Erro: 4\n");
        return 1;
    }
}

// Interpretador simples
void interpret(char* line) {
    if (strncmp(line, "print ", 6) == 0) {
        char* content = line + 6;
        if (content[0] == '"') {
            stripQuotes(content);
            printf("%s\n", content);
        } else {
            const char* val = getVar(content);
            if (val) {
                printf("%s\n", val);
            } else {
                printf("Erro: variável '%s' não encontrada.\n", content);
            }
        }
    }
    else if (strncmp(line, "var ", 4) == 0) {
        char name[32], value[128];
        if (sscanf(line + 4, "%s = %[^\n]", name, value) == 2) {
            if (stripQuotes(value) == 0){
                setVar(name, value);
            }
        } else {
            printf("Erro de sintaxe em declaração de variável.\n");
        }
    }
    else {
        printf("Comando desconhecido.\n");
    }
}

int main() {
    char line[256];

    printf("AirTest v0.1\nDigite comandos ou 'exit'\n");

    while (1) {
        printf("> ");
        if (!fgets(line, sizeof(line), stdin)) break;
        if (strncmp(line, "exit", 4) == 0) break;

        // Remove newline
        line[strcspn(line, "\n")] = 0;

        interpret(line);
    }

    return 0;
}
