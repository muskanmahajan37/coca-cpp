#ifndef BC_DEMO__REPO_H__
#define BC_DEMO__REPO_H__

#include "domain/model.h"
//#include <vector>

namespace repositories {
using namespace domain;

struct Repository
{

};

struct CargoRepository: Repository
{
    CargoRepository();
    void Save(Cargo* cargo);
    Cargo* FindById(int id);
};

}

#endif