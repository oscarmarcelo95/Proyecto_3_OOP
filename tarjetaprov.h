class tarjetaProv : public tarjeta
{
	public:
		tarjetaProv();
		tarjetaProv(int ProvidTarjeta, int idPro, string empresa);
		int getIdTarjetaPprovrov(){return idTarjeta;};
		void setIdTarjetaprov(int idTarjeta){this->idTarjeta = idTarjeta;};
		int calculaPago(Reloj horaEntrada, Reloj horaSalida, int tarifa);
		void muestraDatos();
	protected:
		string empresa;
		int idPro;
};
tarjetaProv::tarjetaProv() : tarjeta()
{
	empresa = "n/a";
	idPro = 0;
}
tarjetaProv::tarjetaProv(int idTarjeta, int idPro, string empresa) : tarjeta(idTarjeta)
{
	this -> empresa = empresa;
	this -> idPro = idPro;
}
int tarjetaProv::calculaPago(Reloj horaEntrada, Reloj horaSalida, int tarifa)
{
	return (calculaHorasCobrar(horaEntrada, horaSalida)-1)*tarifa;
}
void tarjetaProv::muestraDatos()
{
	cout << "Identifiacion: " << idTarjeta << endl;
	cout << "Empresa: " << empresa << endl; 
}