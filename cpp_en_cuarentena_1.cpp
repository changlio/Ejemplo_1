//============================================================================
// Name        : cpp_en_cuarentena_1.cpp
// Author      : Angel
// Version     :
// Copyright   : Your copyright notice
// Description : uso de estandar c++11 (se incluyo flag para usarlo)
//               (vector, for statement
//============================================================================

#include <iostream>   //cin and cout
#include <vector>     //usar vector
#include <algorithm> //para usar objeto "sort"

#include <fstream>   //para manipular archivos x ex. txt

//#include <bits/stdc++.h>

using namespace std;

int main() {

	////////////////////////////practica de vectores//////////////
	int tamano=0;
	cout<<"dime el tamaño del vector"<<endl;
	cin>>tamano;
	vector<int> arreglo(tamano);
	vector<int> arreglo_cte1(3,10); //inizializa con un vector [10,10,10]
	vector<int> arreglo_cte2{3,2};  //inizializa con un vector [3,2]
	vector<int> valores{2,5,7,8,9,3};

	int c_array[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; //array multidimencional(C)
	vector<vector<int> > cpp_vector = { {1, 2, 3}, {4, 5}, {7, 8, 9} };//(vector mulidim)(c++)
	cout<<"el valor indexado de  es:"<<cpp_vector[2][1]<<endl; //row,column (valor es 8)

	//delete(c_array); //no se borra solo? a diferencia de vector, hay que invocar su uso

	///////////////////////////practica sort//////////////////////

	sort(valores.begin(),valores.end());

    ///////////////////////////practica for statement///////////////
	cout<< "ingresa sus valores seguidos por la tecla Enter"<<endl;
	for(vector<int>::iterator it=arreglo.begin();it != arreglo.end(); ++it){
		std::cin>>*it;
	}

	for (auto i = arreglo.begin(); i != arreglo.end(); ++i){
	    cout << *i << ' ';
}
	cout<<endl;

	for (auto& i:arreglo){ // &es opcional, es solo para no copiar elementos de arreglo, incluso
		cout << i << ' ';  //puedes modificar los valores en el arreglo original
	}
	cout<<endl;


	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
