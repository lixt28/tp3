#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>

class Produit{
    public:
    Produit(std::string titre, std::string description, int quantite, int prixUnitaire, int id);
    std::string getTitre() const;
    std::string getDescription() const;
    int getQuantite() const;
    int getPrixUnitaire() const;
    int getID() const;
    void modifier(int nouvelleQuantite);
    friend std::ostream& operator<<(std::ostream& os, Produit& produit);

    private:
    std::string _titre;
    std::string _description;
    int  _quantite;
    int _prixUnitaire;
    int _id;
};
#endif