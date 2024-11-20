#include <stdio.h>

struct Adresse {
    char *ville;
    char *rue;
    int postal;
};

struct Personne {
    char *nom;
    int age;
    struct Adresse adresse;
};

struct Personne personnes[100];

// créer une adresse et le retourner
struct Adresse creer_adresse(char *ville,char *rue,int postal)
{
    struct Adresse adresse;

    adresse.ville = ville;
    adresse.rue = rue;
    adresse.postal = postal;

    return adresse;
}

// créer une personne et le retourner
struct Personne creer_personne(char *nom,int age,struct Adresse adresse)
{
    struct Personne personne;

    personne.nom = nom;
    personne.age = age;
    personne.adresse = adresse;

    return personne;
}

int main() {

    int age, code_postal;
    char nom[31];
    char ville[31];
    char rue[51];
    printf("Entrez le nom du personne:");
    scanf("%s", nom);
    printf("Entrez l'age du personne:");
    scanf("%d", &age);
    printf("Entrez le nom de la ville du personne:");
    scanf("%s", ville);
    printf("Entrez le nom du la rue du personne:");
    scanf("%s", rue);
    printf("Entrez le code postal du personne:");
    scanf("%d", &code_postal);

    struct Adresse a1;
    struct Personne p1;

    a1 = creer_adresse(ville, rue,code_postal);

    p1 = creer_personne(nom, age,a1);

    printf("nom: %s\n", p1.nom);
    printf("age: %d\n", p1.age);
    printf("ville: %s\n", p1.adresse.ville);
    printf("rue: %s\n", p1.adresse.rue);
    printf("postal: %d\n", p1.adresse.postal);
    
    return 0;
};
