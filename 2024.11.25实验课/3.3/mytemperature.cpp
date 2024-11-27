double celsius_to_fah(double cel) {
	double f;
	f = cel * 1.8 + 32;
	return f;
}
double fahrenheit_to_cels(double fah){
	double c;
	c = (fah - 32) / 1.8;
	return c;
}