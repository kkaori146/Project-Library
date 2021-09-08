//Método

#include "DVD.h"
#include <string>

DVD::DVD() //Nome da classe :: Nome do método
{

}

DVD::DVD(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int regiao, char legendas[])
{
	this->codigo = codigo;
	strcpy(this->titulo, titulo);
	this->discos = discos;
	this->duracao = duracao;
	this->regiao = regiao;
	strcpy(this->legendas, legendas);
}

DVD::~DVD()
{

}
