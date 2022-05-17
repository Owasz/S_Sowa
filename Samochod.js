class Samochod {
    constructor(marka, model, cena, rocznik, spalanie){
        this.marka = marka;
        this.model = model;
        this.cena = cena;
        this.rocznik = rocznik;
        this.spalanie = spalanie;
    }

    wiek(){
        const data = new Date();
        const rok = data.getFullYear();
        const wiek_pojazdu = rok - this.rocznik;

        return 'Wiek pojazdu wynosi ' + wiek_pojazdu;
    }

    koszt(){
        const spalanie = this.spalanie;
        const paliwo = 8;

        const spalanko = spalanie * paliwo;

        return 'Spalanie wynosi ' + spalanko;
    }
}