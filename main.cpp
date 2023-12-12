#include <iostream>
#include "magasin.h"
#include "client.h"

int main() {
    std::vector<int> panier1,panier2;
    Client c1("Ginhac","Dominic", 640214585,panier1);
    Client c2("Meunier","Charles", 659897943,panier2);

    Produit P1("PS4", "Consoles de jeux video", 5, 500, 1);
    Produit P2("PS5", "Consoles de jeux video", 1, 600, 2);
    Produit P3("HP", "ordinateur portable", 10, 1200, 3);

    c1.AjouterProduitPanierAchat(P1,2);
    c1.AjouterProduitPanierAchat(P3,1);
    c1.getPanierAchat();
    c1.ModifierQuantiteProduit(P1,3);
    c1.getPanierAchat();
    c1.SupprimerElementPanier(3);
    c1.ValiderPanier();

    

    return 0;
}