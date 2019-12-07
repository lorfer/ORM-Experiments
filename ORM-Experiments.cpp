#pragma once
#include <iostream>
#include "HEADDER/SysEntity.h"
#include "Cliente.h"
//#include "SysEntity.h"
int main()
{
	
	Cliente miCliente;
	vector<string> clientes;
	SysEntity En("Cliente");

	miCliente.setNombre("Fernando");
	miCliente.setApellido("Garcia");

	clientes.push_back("1");
	clientes.push_back(miCliente.getNombre());
	clientes.push_back(miCliente.getApellido());
	clientes.push_back("809-918-2040");
	

	En.Alta(clientes);
	
}
	