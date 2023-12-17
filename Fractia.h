#ifndef FRACTIA_H
#define FRACTIA_H

class Fractia
{
private:
	int numaratorul;
	int numitorul;

	static int cmmdc(int x, int y);

public:
	Fractia(); //constructor cu 0 parametri
	Fractia(int numaratorul);//constructor cu un parametru
	Fractia(int numaratorul, int numitorul);//constructor cu doi parametri
	Fractia(const Fractia& other); //copy-constructor

	Fractia adunare(const Fractia& other) const;
	Fractia scadere(const Fractia& other) const;
	Fractia inmultire(const Fractia& other) const;
	Fractia impartire(const Fractia& other) const;

	static int cmmdc(int x, int y);

	Fractia simplifica() const;
	Fractia reciproc() const;

	bool egal(const Fractia& other) const;

	void print() const;

};

#endif
