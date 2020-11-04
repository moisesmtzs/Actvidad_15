#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<string> strings;
    string op;

    while (true){

        cout << "0) Salir" << endl;
        cout << "1) Agregar al final" << endl;
        cout << "2) Mostrar " << endl;
        cout << "3) Inicializar " << endl;
        cout << "4) Frente " << endl;
        cout << "5) Último " << endl;
        cout << "6) Ordenar " << endl;
        cout << "7) Insertar " << endl;
        cout << "8) Eliminar " << endl;
        cout << "9) Eliminar el último " << endl;
        getline(cin,op);

        if ( op == "1"){

            string cadena;
            cout << "Cadena: " ;
            cin>>cadena; cin.ignore(); 

            strings.push_back(cadena);

        } 

        else if ( op == "2" ){

            for ( size_t i = 0 ; i < strings.size() ; i++ ){

                cout << strings[i] << ", ";

            }
            cout << endl;
        }

        else if ( op == "3" ){

            size_t n;
            string cadena;

            cout << "Tam: ";
            cin>>n;
            cout << "Cadena: ";
            cin>>cadena; cin.ignore();

            strings = vector<string>(n,cadena);

        }

        else if ( op == "4" ){

            if ( strings.empty() ){
                cout << "Vector vacío" << endl;
            } else {
                cout << strings.front() << endl;
            }

        }

        else if ( op == "5" ){

            if ( strings.empty() ){
                cout << "Vector vacío" << endl;
            } else {
                cout << strings.back() << endl;
            }
        }

        else if ( op == "6" ){
            sort( strings.begin(), strings.end(), greater<string>() );
        }

        else if ( op == "7" ){

            size_t i;
            string cadena;

            cout << "Posición: ";
            cin >> i;
            cout << "Cadena: ";
            cin >> cadena; cin.ignore();

            if ( i>= strings.size() ) {

                cout << "Posición no válida " << endl;

            } else {
                strings.insert( strings.begin()+i, cadena );
            }

        }
        
        else if ( op == "8" ){

            size_t i;
            cout << "Posición: ";
            cin >> i; cin.ignore();

            if ( i >= strings.size() ){
                cout << "Posición no válida " << endl;
            } else {
                strings.erase( strings.begin()+i );
            }

        }
        
        else if ( op == "9" ){

            if ( strings.empty() ){
                cout << "Vector vacío" << endl;
            } else {
                strings.pop_back();
            }
            

        }
        

        else if ( op == "0" ){
            break;
        }
        
    }
    return 0;

}





