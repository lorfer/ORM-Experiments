#pragma once

#include <string>
#include <vector>
using namespace std;
class Cliente
{

private:
	
	string nombre;
	string apellido;
	//vector<Reserva> 
public:
	Cliente();
	void setNombre(string p_nombre);
	void setApellido(string p_apellido);
	string getNombre(){return nombre;}
	string getApellido() { return apellido; }


};

