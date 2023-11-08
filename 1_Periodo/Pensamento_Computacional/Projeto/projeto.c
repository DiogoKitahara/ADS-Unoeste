#include <stdio.h>
#include <string.h>
#define TF 100

int main(void)
{
    // Declarar variaveis
    int i, operacao, cadastro, vMed[TF], vPac[TF], vProc[TF], tlm = 0, tlp = 0, tlpr = 0, igual = 0, codigo, achou;
    char vMedico[TF][30], vPaciente[TF][30], vProcedimento[TF][30];
    // Loop até o usuario digitar o numero 5 - Finalizar
    do
    {
        // Montar menu
        printf("-------------------------------------------\n");
        printf("1 - Cadastrar\n");
        printf("2 - Exclusao\n");
        printf("3 - Lancamento\n");
        printf("4 - Relatorio\n");
        printf("5 - Finalizar\n");
        printf("-------------------------------------------\n");
        printf("Escolha uma operacao: ");
        scanf("%d", &operacao);
        // Switch para operacao
        switch (operacao)
        {
        // 1 - Cadastro
        case 1:
            // Montar outro menu
            printf("-------------------------------------------\n");
            printf("1 - Cadastro de medico\n");
            printf("2 - Cadastro de paciente\n");
            printf("3 - Cadastro de procedimento\n");
            printf("4 - Retornar\n");
            printf("-------------------------------------------\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &cadastro);
            printf("-------------------------------------------\n");
            // Switch para o tipo de cadastro
            switch (cadastro)
            {
            // 1 - Médico
            case 1:
                printf("Codigo do medico: ");
                scanf("%d", &codigo);
                i = 0;
                achou = 0;
                // Loop para comparar o vMed com todos os vMeds já cadastrados
                while (i < tlm && achou == 0)
                {
                    if (vMed[i] == codigo)
                    {
                        achou = 1;
                    }
                    i++;
                }
                // Se já existe esse médico cadastrado
                if (achou == 1) {
                    printf("Medico ja cadastrado!\n");
                }
                // Senão
                else {
                    // Verificar se existe espaço suficiente para adicionar um médico
                    if (tlm < TF) {
                        vMed[tlm] = codigo;
                        printf("Nome do medico: ");
                        scanf("%s", vMedico[tlm]);
                        printf("Medico cadastrado com sucesso!\n");
                        tlm++;
                    }
                    else {
                        printf("Numero maximo de medicos cadastrados atingido!\n");
                    }
                }
                break;
            // 2 - Pacientes
            case 2:
            	printf("Codigo do paciente: ");
            	scanf("%d", &codigo);
            	i = 0;
            	achou = 0;
            	// Loop para comparar o vPac com todos os vPacs já cadastrados
            	while(i < tlp && achou == 0){
            		if (codigo == vPac[i]){
            			achou = 1;
            		}
            		i++;
            	}
            	// Se já existe esse paciente cadastrado
            	if (achou == 1) {
            		printf("Paciente ja cadastrado!\n");
            	}
            	// Senao
            	else {
            		// Verificar se existe espaço suficiente para adicionar um paciente
            		if (tlp < TF) {
            			vPac[tlp] = codigo;
            			printf("Nome do paciente: ");
            			scanf("%s", vPaciente[tlp]);
            			printf("Paciente cadastrado com sucesso!\n");
            			tlp++;
            		}
            		else {
            			printf("Numero maximo de pacientes cadastrados!\n");
            		}
            	}
            	break;
            // 3 - Procedimentos
            case 3:
            	printf("Codigo do procedimento: ");
            	scanf("%d", &codigo);
            	i = 0;
            	achou = 0;
            	// Loop para comparar o vPac com todos os vPacs já cadastrados
            	while(achou == 0 && i < tlpr){
            		if (codigo == vProc[i]) {
            			achou = 1;
            		}
            		i++;
            	}
            	// Se ja existe esse paciente cadastrado
            	if (achou == 1) {
            		printf("Procedimento ja cadastrado!\n");
            	}
            	// Senao
            	else {
            		// Verificar se existe espaço suficiente para adicionar um paciente
			if (tlpr < TF) {
				vProc[tlpr] = codigo;
				printf("Nome do procedimento: ");
				scanf("%s", vProcedimento[tlpr]);
				printf("Procedimento cadastrado com sucesso!\n");
				tlpr++;
			}
			else {
				printf("Numero maximo de procedimentos cadastrados!\n");
			}
            	}
            	break;
            // 4 - Retornar
            }
        // 2 - Exclusão
        case 2:
            break;
        // 3 - Lançamento
        case 3:
            break;
        // 4 - Relatório
        case 4:
            break;
        // 5 - Finalizar
        case 5:
            break;
        }
    } while (operacao != 5);
}
