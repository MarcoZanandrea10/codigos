#include <iostream>

using namespace std;
void LimparTela() {
    system("cls");
}
int main()
{
    int i, dia, mes, ano, limpar, round2;
    string nome, cpf, email, senha, pix;
    float deposito, somaP=0, somaN=0, ValorAposta[10];
    char R[10], G[10], R2[10], G2[10], R3[10], G3[10];

    G[0] = '1';     G[1] = '1';     G[2] = '2';     G[3] = 'x';      G[4] = '1';
    G[5] = '2';     G[6] = '1';     G[7] = 'x';     G[8] = '2';      G[9] = '1';

    G2[0] = '1';     G2[1] = 'x';     G2[2] = 'x';     G2[3] = '1';      G2[4] = '1';
    G2[5] = '2';     G2[6] = '2';     G2[7] = 'x';     G2[8] = '1';      G2[9] = 'x';

    G3[0] = '1';     G3[1] = 'x';     G3[2] = '1';     G3[3] = '2';      G3[4] = '2';
    G3[5] = '2';     G3[6] = 'x';     G3[7] = 'x';     G3[8] = '1';      G3[9] = '1';


    cout<<"======MARQUINHO.BET======\n";

    cout<<"\n========CADASTRO:========\n";   //Tela de Cadastro
    cout<<"\nNome: ";
    cin>>nome;
    cout<<"\nCPF: ";
    cin>>cpf;
    cout<<"\nE-mail: ";
    cin>>email;
    cout<<"\nSenha: ";
    cin>>senha;
    cout<<"\nData de Nascimento: ";
    cout<<"\nDia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Ano: ";
    cin>>ano;

    if (ano>2006) {
        cout<<"\n"<<dia<<"/"<<mes<<"/"<<ano<<" (menor de 18 anos)\n";
        cout<<"\n"<<nome<<", voce nao tem 18 anos ainda para comecar a apostar.\n";
        return 0;

    } else {
    cout<<"\n"<<dia<<"/"<<mes<<"/"<<ano<<" (maior de 18 anos)\n";
    }

    cout<<"\n==CADASTRO FINALIZADO COM SUCESSO==\n";
    cout<<"\nDIGITE 1 E ENTER PARA PROSSEGUIR: ";     //Limpar a Pagina
    cin>>limpar;
    cin.get();
    LimparTela();

    cout<<"======MARQUINHO.BET======\n";
    cout<<"\n=====CASA COM 100% DE BONUS NO PRIMEIRO DEPOSITO=====\n";    //Deposito
    cout<<"\nDigite um valor para depositar (MIN. R$30): ";
    cin>>deposito;
    if (deposito<30){
        cout<<"\nERROR 404.";
        cout<<"\nAparentemente "<<nome<<" esta extremamente liso para jogar na Marquinho.Bet\n";
        return 0;

        } else {
    deposito=deposito*2;
    cout<<"\nSaldo Atual: R$ "<<deposito<<"\n";
        }

    cout<<"\nDIGITE 1 E ENTER PARA PROSSEGUIR: ";     //Limpar a Tela
    cin>>limpar;
    cin.get();
    LimparTela();

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<"======MARQUINHO.BET======\n";                             //Primeira Rodada
    cout<<"\nEscreva seus palpites para a Primeira Rodada: \n";
    cout<<"\nInter x Gremio\nFlemengo x Fluminense\nAtletico Mg x Cruzeiro\nBahia x Vitoria\nVasco x Botafogo\nAtletico Go x Athletico Pr";
    cout<<"\nPalmeiras x Corinthians\nSao Paulo x Bragantino\nCuiaba x Fortaleza\nJuventude x Criciuma\n";
    cout<<"\nTime da Casa Ganha = 1, Empate = x, Time Visitante Ganha = 2\n";

    for(i=0; i<10; i++){                //Palpites para o Jogo
        cout<<"\nJogo "<<i+1<<": ";
        cin>>R[i];
        cout<<"Valor da Aposta: ";      //Valor Apostas
        cin>>ValorAposta[i];
        }

    cout<<"\n=====GABARITO DOS JOGOS DA RODADA 1=====\n";         //Gabarito dos Jogos
    for(i=0; i<10; i++){
        if (R[i]== G[i]){                               //Acertou/Lucro
            (ValorAposta[i]=ValorAposta[i]*2);
            cout<<"\nJogo "<<i+1<<": "<<"ACERTOU";
            cout<<"\nGanhos: R$ "<<ValorAposta[i]<<"\n";
            (ValorAposta[i]=ValorAposta[i]/2);
            somaP=somaP+ValorAposta[i];
        } else {
            cout<<"\nJogo "<<i+1<<": "<<"ERROU";        //Errou
            (ValorAposta[i]=ValorAposta[i]-ValorAposta[i]*2);
            cout<<"\nGanhos: R$ "<<ValorAposta[i]<<"\n";
            somaN=somaN-ValorAposta[i];
        }
    }
    (deposito=deposito+somaP);
    (deposito=deposito-somaN);
    cout<<"\nSaldo Atual: R$ "<<deposito<<"\n";

    cout<<"\nPara encerrar as apostas agora digite: '1' ";
    cout<<"\nPara continuar apostando digite: '2' \n";
    cout<<"\n";
    cin>>round2;
    cin.get();
    LimparTela();

    if (round2==1){                                                                                       //Encerrar as Apostas
    cout<<"========MARQUINHO.BET========\n";
    cout<<"\nObrigado, "<<nome<<" por jogar na Marquinho.Bet, voce ganhou: R$ "<<deposito<<"\n";
    cout<<"\nDigite sua chave Pix e aguarde para enviarmos o valor.";
    cout<<"\nChave Pix: ";
    cin>>pix;
    cout<<"\nHEHEHE OTARIO A CASA SEMPRE GANHA, VOU ENVIAR PORRA NENHUMA, FAZ O L!!!!\n";
    return 0;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        } else {                                                //Segunda Rodada
        cout<<"======MARQUINHO.BET======\n";
    cout<<"\nEscreva seus palpites para a Segunda Rodada: \n";
    cout<<"\nInter x Athetico Pr\nPalmeiras x Flamengo\nCorinthians x Gremio\nFluminense x Vasco\nVitoria x Atletico Mg\nCriciuma x Sao Paulo";
    cout<<"\nCuiaba x Juventude\nBotafogo x Bahia\nBragantino x Atletico Go\nFortaleza x Cruzeiro\n";
    cout<<"\nTime da Casa Ganha = 1, Empate = x, Time Visitante Ganha = 2\n";

        for(i=0; i<10; i++){                //Palpites para o Jogo
            cout<<"\nJogo "<<i+1<<": ";
            cin>>R2[i];
            cout<<"Valor da Aposta: ";      //Valor Apostas
            cin>>ValorAposta[i];
            }

            cout<<"\n=====GABARITO DOS JOGOS DA RODADA 2=====\n";         //Gabarito dos Jogos
    for(i=0; i<10; i++){
        if (R2[i]== G2[i]){                               //Acertou/Lucro
            (ValorAposta[i]=ValorAposta[i]*2);
            cout<<"\nJogo "<<i+1<<": "<<"ACERTOU";
            cout<<"\nGanhos: R$ "<<ValorAposta[i]<<"\n";
            (ValorAposta[i]=ValorAposta[i]/2);
            somaP=somaP+ValorAposta[i];
        } else {
            cout<<"\nJogo "<<i+1<<": "<<"ERROU";          //Errou
            (ValorAposta[i]=ValorAposta[i]-ValorAposta[i]*2);
            cout<<"\nGanhos: R$ "<<ValorAposta[i]<<"\n";
            somaN=somaN-ValorAposta[i];
        }
    }
    (deposito=deposito+somaP);
    (deposito=deposito-somaN);
    cout<<"\nSaldo Atual: R$ "<<deposito<<"\n";
        }

    cout<<"\nPara encerrar as apostas agora digite: '1' ";
    cout<<"\nPara continuar apostando digite: '2' \n";
    cout<<"\n";
    cin>>round2;
    cin.get();
    LimparTela();

    if (round2==1){                                                                                       //Encerrar as Apostas
    cout<<"========MARQUINHO.BET========\n";
    cout<<"\nObrigado, "<<nome<<" por jogar na Marquinho.Bet, voce ganhou: R$ "<<deposito<<"\n";
    cout<<"\nDigite sua chave Pix e aguarde para enviarmos o valor.";
    cout<<"\nChave Pix: ";
    cin>>pix;
    cout<<"\nHEHEHE OTARIO A CASA SEMPRE GANHA, VOU ENVIAR PORRA NENHUMA, FAZ O L!!!!\n";
    return 0;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        } else {                                                //Terceira Rodada
        cout<<"======MARQUINHO.BET======\n";
    cout<<"\nEscreva seus palpites para a Terceira Rodada: \n";
    cout<<"\nInter x Corinthians\nVasco x Criciuma\nPalmeiras x Fluminense\nGremio x Flamengo\nSao Paulo x Juventude\nCuiaba x Bragantino";
    cout<<"\nAtletico Mg x Bahia\nCruzeiro x Vitoria\nAthetico Pr x Botafogo\nAtletico Go x Fortaleza\n";
    cout<<"\nTime da Casa Ganha = 1, Empate = x, Time Visitante Ganha = 2\n";

        for(i=0; i<10; i++){                //Palpites para o Jogo
            cout<<"\nJogo "<<i+1<<": ";
            cin>>R3[i];
            cout<<"Valor da Aposta: ";      //Valor Apostas
            cin>>ValorAposta[i];
            }

            cout<<"\n=====GABARITO DOS JOGOS DA RODADA 3=====\n";         //Gabarito dos Jogos
    for(i=0; i<10; i++){
        if (R3[i]== G3[i]){                               //Acertou/Lucro
            (ValorAposta[i]=ValorAposta[i]*2);
            cout<<"\nJogo "<<i+1<<": "<<"ACERTOU";
            cout<<"\nGanhos: R$ "<<ValorAposta[i]<<"\n";
            (ValorAposta[i]=ValorAposta[i]/2);
            somaP=somaP+ValorAposta[i];
        } else {
            cout<<"\nJogo "<<i+1<<": "<<"ERROU";          //Errou
            (ValorAposta[i]=ValorAposta[i]-ValorAposta[i])*2;
            cout<<"\nGanhos: R$ "<<ValorAposta[i]<<"\n";
            somaN=somaN-ValorAposta[i];
        }
    }
    (deposito=deposito+somaP);
    (deposito=deposito-somaN);
    cout<<"\nSaldo Atual: R$ "<<deposito<<"\n";
        }

    cout<<"\nPara encerrar as apostas agora digite: '1' ";
    cout<<"\nPara continuar apostando digite: '2' \n";
    cout<<"\n";
    cin>>round2;
    cin.get();
    LimparTela();

    cout<<"========MARQUINHO.BET========\n";
    cout<<"\nA casa tambem precisa ganhar!\n";                                                        //Final
    cout<<"\nObrigado, "<<nome<<" por jogar na Marquinho.Bet, voce ganhou: R$ "<<deposito<<"\n";
    cout<<"\nDigite sua chave Pix e aguarde para enviarmos o valor.";
    cout<<"\nChave Pix: ";
    cin>>pix;
    cout<<"\nHEHEHE OTARIO A CASA SEMPRE GANHA, VOU ENVIAR PORRA NENHUMA, FAZ O L!!!!\n";


    return 0;
}
