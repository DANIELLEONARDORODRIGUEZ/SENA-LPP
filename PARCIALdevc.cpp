# include <iostream>
using namespace std;
main ()
{
    int n,conf,conf1,estudiantes,materias,mayor,menor,contador,contador2,contador3;
    double calificacion,suma,promedio;

    do
    {
    	cout <<endl<<endl;
		cout << "\t\t\t MENU CALIFICACIONES"<< endl;
    	cout << "1. Ingresar las calificaciones"<<endl;
    	cout << "2. Promedio calificaciones"<<endl;
    	cout << "3. Calificaciones encima del promedio"<<endl;
    	cout << "4. Salir "<<endl;
    	cout << "Seleccione la opcion que requiere: ";
    	cin >> n ;
        switch (n)
        {
            case 1:cout << "VAMOS A INGRESAR LAS CALIFICACIONES;"<<endl;
                    cout << "Ingrese el numero de estudiantes: ";
                    cin >> estudiantes;
                    cout << "Desea ingresar mas estudiantes? 1.Si 2.No"<<endl;
                    cin>>conf;
                    while (conf!=2)
                    {
                    	cout << "Ingrese el numero de estudiantes: ";
                    	cin >> estudiantes;
                    	cout << "Desea ingresar mas estudiantes? 1.Si 2.No"<<endl;
                    	cin>>conf;
					}
                    cout << "Ingrese la cantidad de materias a calificar por estudiante: ";
                    cin >> materias;
                    cout << "Desea ingresar mas materias? 1.Si 2.No"<<endl;
                    cin>>conf1;
                    while (conf1!=2)
                    {
                    	cout << "Ingrese la cantidad de materias a calificar por estudiante: ";
                    	cin >> materias;
                    	cout << "Desea ingresar mas materias? 1.Si 2.No"<<endl;
                    	cin>>conf1;
					}
                    for (contador= 0; contador < estudiantes; contador++)
                    {
                        suma=0;
                        for ( contador2= 0; contador2 < materias; contador2++)
                        {
                            cout << "Ingrese la calificacion del estudiante "<<contador+1<<" en la materia "<<contador2+1<<": ";
                            cin >> calificacion;
                            suma=suma+calificacion;
                            promedio=suma/materias;
                            cout << "El promedio de las calificaciones del estudiante "<<contador+1<<" es: "<<promedio<<endl;
                            if (calificacion>mayor)
                            {
                                mayor=calificacion;
                                cout << "La calificacion mayor es: "<<mayor<<endl;
                            }
                            else
                            {
                                menor=calificacion;
                                cout << "La calificacion menor es: "<<menor<<endl;
                            }
                        }
                    }
            break;
            case 2:cout<<"\nCalculo promedio calificaciones ingresadas\n";
            for (contador= 0; contador < estudiantes; contador++)
            {
                        suma=0;
                        for ( contador2= 0; contador2 < materias; contador2++)
                        {
                            suma=suma+calificacion;
                            promedio=suma/materias;
                            cout << "El promedio de las calificaciones del estudiante "<<contador+1<<" es: "<<promedio<<endl;
                        }
            }
            break;
            case 3:cout<<"\nCalificaciones por encima del promedio\n";
            for (contador= 0; contador < estudiantes; contador++)
            {
                        for ( contador2= 0; contador2 < materias; contador2++)
                        {
                            if (calificacion>promedio)
                            {
                                cout << "La calificacion del estudiante "<<contador+1<<" es: "<<calificacion<<endl;
                            }
                            suma=0;
                            suma=suma+calificacion;
                            promedio=suma/materias;
                            cout << "El promedio de las calificaciones del estudiante "<<contador+1<<" es: "<<promedio<<endl;
                            if (calificacion>mayor)
                            {
                                mayor=calificacion;
                                cout << "La calificacion mayor es: "<<mayor<<endl;
                            }
                            if (calificacion<menor)
                            {
                                menor=calificacion;
                                cout << "La calificacion menor es: "<<menor<<endl;
                            }
                        }
            }
            break;
            case 4:cout<<"\t\t EXIT"<<endl;
            break;
            default:cout << "Opcion no valida";
            break;
        }
    }
    while (n!=4);
    cout <<"\t\tBuena vida";
}
