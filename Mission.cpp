#include "Mission.h"


using namespace std;

/*
*\brief Constructeur par default */

Mission::Mission() {

	this->nbPersonne = "10";

	this->descriptifMission = "tache complexe";

	this->nbHeure = "99h"

}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param nom nom de la mission
 * \param ville ville de la mission
 */
Mission::Mission(std::string nombredepersonne, std::string descriptition, std::string nombreheure) {
	this->nbPersonne = nombredepersonne;

	this->descriptifMission = descriptition;

	this->nbHeure = nombreheure
}






/*brief Destructeur*/
Mission::~Mission() {

	cout << "Destrcution de la Mission " << this->nbPersonne << " " << this->descriptifMission << this->nbHeure <<  endl;

}

/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type Mission
 */
Mission::Misson(const Mission& entre)
{
	cout << "Copie de Capitaine" << endl;
	this->nbPersonne = entre.nbPersonne;
	this->discipitifMission = entre.discripitifMission;
	this->nbHeure = entre.nbHeure

}


/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type Mission
 * \return Nouvelle objet de type Mission
 */
Mission& Mission::operator = (const Mission& entre)
{
	cout << "Affectation de l'entreprise" << std::endl;
	if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
	{
		this->nbPersonne = entre.nbPersonne;
		this->descriptifMission = entre.descriptifMission;
		this->nbHeure = entre.nbHeure;
	}
	return *this;
}


/**
 * \brief Accesseur de l'attribut nombrePersonne
 *
 * \return Nom de nombrePersonne
 */
std::string Mission::getNbPersonne()
{
	return this->nbPersonne;
}


/**
 * \brief Mutateur de l'attribut nombrePersonne
 *
 * \param nouveauNom nouveau nombre Personne
 */
void Mission::setNbPersonne(std::string nouveauNombre) {
	this->nbPersonne = nouveauNombre;
}



/**
 * \brief Accesseur de l'attribut descriptifMission
 *
 * \return descriptifMission
 */
std::string Mission::getdescriptifMission() {
	return this->descriptifMission;
}


/**
 * \brief Mutateur de l'attribut descriptifMission
 *
 * \param descriptifMission
 */
void  Mission::setDescriptifMission(std::string discriptifMission) {
	this->descriptifMission = descriptifMission;
}
