#include <iostream>

using namespace std;

typedef struct PILHA{
    int num;
    PILHA* proximo;
}PILHA;

PILHA* topo = NULL;

void inserir(int num){//push | Tipo de dado void pq não retorna valor, apena recebe. |
    PILHA* novoNo;
    novoNo = new PILHA;
    novoNo ->num = num;
    novoNo ->proximo = topo;
    topo = novoNo;
}

int remover(){          //pop  | Tipo de dade int pq retorna o valor removido (q é int)|
        PILHA* temp;
        temp = topo;
        int num = topo->num;
        topo = topo -> proximo;
        delete temp;
        return num;    
}

void imprimir(){ // De nv VOID por não retornar um valor

    cout << "\nPrint da Pilha: \n[ ";
    PILHA* temp;
    temp = topo;
    while (topo != NULL){
        cout << temp->num << " ";
        temp = temp->proximo;
    }
    cout << "]\n\n";
}

int esvaziar(){          //pop            
    if(topo == NULL) cout << "Pilha vazia";
    else {
        topo = NULL;
        cout << "Pilha esvaziada com sucesso";
    }
}

int main(){
    PILHA* novo;
    int op, size=0; 

    cout << "<----------Criando uma Pilha---------->\n\n";

    do{
        cout << "[1] Inserir na pilha\n";
        cout << "[2] Mostrar a pilha\n";
        cout << "[3] Remover da pilha\n"; // Tentar criar uma pilha para os nums limpos
        cout << "[4] Envaziar a pilha\n";
        cout << "[5] Sair\n";
        cin >> op;

        if(op == 1){
            cout << "Digite um numero\n";
            cin >> novo -> num;
            inserir(novo -> num);
            size++;
        }else if(op == 2){
            imprimir();
        }else if(op == 3){
            cout << "O numero " <<  remover() << "foi removido\n";
        }else if(op == 4){
            esvaziar();
        }
    }while (op != 0 && op < 5);
    
}