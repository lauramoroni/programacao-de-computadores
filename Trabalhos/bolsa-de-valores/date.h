#pragma once

struct date {
	int day;
	int month;
	int year;
};

// prot�tipos
date read_date();
void show_date(date);

// prot�tipos
/*
istream& operator>>(istream&, date&); // ler dados
ostream& operator<<(ostream&, date); // exibir dados
*/