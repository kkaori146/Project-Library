#include <iostream>

using namespace std;

#include "Livro.h"
#include "Revista.h"
#include "CD.h"
#include "DVD.h"

int main()
{
	Livro *meuLivro;
	meuLivro = new Livro();

	cout << "\nLivros" << endl;
	
		meuLivro->codigo = 1;
		strcpy(meuLivro->titulo, "The Little Prince");

		cout << "(meuLivro) Codigo: " << meuLivro->codigo << endl;
		cout << "(meuLivro) Titulo: " << meuLivro->titulo << endl;

		delete meuLivro;//Liberar espaço de memória após a consulta
	
	unsigned int codigo;
	char titulo[100];
	char editora[60];
	unsigned int paginas;
	char isbn[20];
	unsigned int ano;
	unsigned int mes;
	unsigned int discos;
	unsigned int duracao;
	unsigned int faixas;
	unsigned int regiao;
	char legendas[50];

	codigo = 2;
	strcpy(titulo, "Moby-Dick (2)");
	strcpy(editora, "Richard Bentley");
	paginas = 635;
	strcpy(isbn, "978-85-7503-670-9");

	Livro *livroMobyDick;

	livroMobyDick = new Livro(codigo, titulo, editora, paginas, isbn);

	cout << endl;
	cout << "(livroMobyDick) Codigo: " << livroMobyDick->codigo << endl;
	cout << "(livroMobyDick) Titulo: " << livroMobyDick->titulo << endl;
	cout << "(livroMobyDick) Editora: " << livroMobyDick->editora << endl;
	cout << "(livroMobyDick) Paginas: " << livroMobyDick->paginas << endl;
	cout << "(livroMobyDick) ISBN: " << livroMobyDick->isbn << endl;

	delete livroMobyDick;
	
	cout << "\nRevistas" << endl;

	Revista *minhaRevista;
	minhaRevista = new Revista();

	minhaRevista->codigo = 1;
	strcpy(minhaRevista->titulo, "Pets");

	cout << "(minhaRevista) Codigo: " << minhaRevista->codigo << endl;
	cout << "(minhaRevista) Titulo: " << minhaRevista->titulo << endl;

	delete minhaRevista;//Liberar espaço de memória após a consulta

	codigo = 2;
	strcpy(titulo, "Nature (2)");
	strcpy(editora, "Celtic");
	paginas = 15;
	ano = 1984;
	mes = 04;

	Revista *revistaNature;

	revistaNature = new Revista(codigo, titulo, editora, paginas, ano, mes);

	cout << endl;
	cout << "(revistaNature) Codigo: " << revistaNature->codigo << endl;
	cout << "(revistaNature) Titulo: " << revistaNature->titulo << endl;
	cout << "(revistaNature) Editora: " << revistaNature->editora << endl;
	cout << "(revistaNature) Paginas: " << revistaNature->paginas << endl;
	cout << "(revistaNature) Ano: " << revistaNature->ano << endl;
	cout << "(revistaNature) Mes: " << revistaNature->mes << endl;

	delete revistaNature;

	cout << "\nCD" << endl;

	CD *meuCD;
	meuCD = new CD();

	meuCD->codigo = 1;
	strcpy(meuCD->titulo, "River");

	cout << "(meuCD) Codigo: " << meuCD->codigo << endl;
	cout << "(meuCD Titulo: " << meuCD->titulo << endl;

	delete meuCD;

	codigo = 2;
	strcpy(titulo, "Rainbow (2)");
	discos = 1;
	duracao = 1;
	faixas = 15;

	CD *cdRainbow;

	cdRainbow = new CD(codigo, titulo, discos, duracao, faixas);

	cout << endl;
	cout << "(cdRainbow) Codigo: " << cdRainbow->codigo << endl;
	cout << "(cdRainbow) Titulo: " << cdRainbow->titulo << endl;
	cout << "(cdRainbow) Discos: " << cdRainbow->discos << endl;
	cout << "(cdRainbow) Duracao: " << cdRainbow->duracao << endl;
	cout << "(cdRainbow) Faixas: " << cdRainbow->faixas << endl;

	delete cdRainbow;

	cout << "\nDVD" << endl;

	DVD *meuDVD;
	meuDVD = new DVD();

	meuDVD->codigo = 1;
	strcpy(meuDVD->titulo, "Call");

	cout << "(meuDVD) Codigo: " << meuDVD->codigo << endl;
	cout << "(meuDVD) Titulo: " << meuDVD->titulo << endl;

	delete meuDVD;

	codigo = 2;
	strcpy(titulo, "Carrossel (2)");
	discos = 2;
	duracao = 2;
	regiao = 1;
	strcpy(legendas, "Sim");

	DVD *dvdCarrossel;

	dvdCarrossel = new DVD(codigo, titulo, discos, duracao, regiao, legendas);

	cout << endl;
	cout << "(dvdCarrossel) Codigo: " << dvdCarrossel->codigo << endl;
	cout << "(dvdCarrossel) Titulo: " << dvdCarrossel->titulo << endl;
	cout << "(dvdCarrossel) Discos: " << dvdCarrossel->discos << endl;
	cout << "(dvdCarrossel) Duracao: " << dvdCarrossel->duracao << endl;
	cout << "(dvdCarrossel) Regiao: " << dvdCarrossel->regiao << endl;
	cout << "(dvdCarrossel) Legendas: " << dvdCarrossel->legendas << endl;

	delete dvdCarrossel;

	system("PAUSE");

	return 0;
}