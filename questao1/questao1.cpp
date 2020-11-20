/* 
  856 - PROGRAMAÇÃO ESTRUTURADA – Prof Andre Cotelli Do Espirito Santo

            NOMES                  (MATRICULAS)

  VINÍCIUS SILVA DE OLIVEIRA       (2020101398)
  RHUAN GONZAGA CUNHA FRANCISCO    (2020100052)
  MATEUS SANTOS DE AZEVEDO         (2020100086)
  GABRIEL MEDRADO DE SOUZA         (2020101619)
*/

#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

typedef struct
{
    char nome[20], email[50];
    int idade, telefone;
} user;

user contato[100];
int counter = 0;

void Adicionar()
{
    system("cls");
    cout << "AGENDA ELETRONICA" << endl;
    cout << endl;

    cout << "ADICIONAR NOVO CONTATO" << endl;
    cout << endl;
    cout << endl;

    cout << "NOME: ";
    cin >> contato[counter].nome;

    cout << endl;
    cout << "IDADE: ";
    cin >> contato[counter].idade;

    cout << endl;
    cout << "TELEFONE: ";
    cin >> contato[counter].telefone;

    cout << endl;
    cout << "E-MAIL: ";
    cin >> contato[counter].email;

    counter++;

    cout << endl;
    system("pause");
}

void Pesquisar()
{
    system("cls");
    cout << "AGENDA ELETRONICA" << endl;
    cout << endl;
    cout << "PESQUISAR CONTATO" << endl;
    cout << endl;
    cout << endl;

    char nomeContato[20];
    int k;

    cout << "DIGITE O NOME DO CONTATO QUE DESEJA PESQUISAR: ";
    cin >> nomeContato;

    for (int i = 0; i < 100; i++)
    {
        if (strcmp(contato[i].nome, nomeContato) == 0)
        {
            k = i;
            system("cls");
            cout << "AGENDA ELETRONICA" << endl;
            cout << endl;
            cout << "PESQUISAR CONTATO" << endl;
            cout << endl;
            cout << endl;
            cout << "NOME: " << contato[k].nome << endl;
            cout << "IDADE: " << contato[k].idade << endl;
            cout << "TELEFONE: " << contato[k].telefone << endl;
            cout << "E-MAIL: " << contato[k].email << endl;
            cout << endl;
            break;
        }
        else
        {
            system("cls");
            cout << "AGENDA ELETRONICA" << endl;
            cout << endl;
            cout << "PESQUISAR CONTATO" << endl;
            cout << endl;
            cout << endl;
            cout << "O CONTATO PESQUISADO NAO EXISTE. TENTE NOVAMENTE OU ADICIONE O CONTATO NA AGENDA" << endl;
            break;
        }
    }

    cout << endl;
    cout << endl;

    system("pause");
}

void Exibir()
{
    system("cls");
    cout << "AGENDA ELETRONICA" << endl;
    cout << endl;
    cout << "EXIBIR TODOS OS CONTATOS" << endl;
    cout << endl;
    cout << endl;

    if (contato[0].idade == NULL)
    {
        cout << "NAO HA CONTATOS SALVOS NA AGENDA." << endl;
        cout << endl;
    }
    else
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "NOME: " << contato[i].nome << endl;
            cout << "IDADE: " << contato[i].idade << endl;
            cout << "TELEFONE: " << contato[i].telefone << endl;
            cout << "E-MAIL: " << contato[i].email << endl;
            cout << endl;
            cout << "------------------------" << endl;
            cout << endl;
        }
    }

    system("pause");
}

main()
{
    int op;

    do
    {
        system("cls");
        cout << "AGENDA ELETRONICA" << endl;
        cout << endl;
        cout << "[1] ADICIONAR" << endl;
        cout << "[2] PESQUISAR" << endl;
        cout << "[3] EXIBIR" << endl;
        cout << "[0] SAIR" << endl;
        cout << endl;
        cout << "OPCAO: ";
        cin >> op;

        switch (op)
        {
        case 1:
            Adicionar();
            break;
        case 2:
            Pesquisar();
            break;
        case 3:
            Exibir();
            break;
        }
    } while (op != 0);
}