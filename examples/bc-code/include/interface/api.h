#ifndef BC_DEMO_API_H
#define BC_DEMO_API_H

#include "services/service.h"
#include "msg.h"

namespace api {
using namespace services;

struct Api {
    Api(std::shared_ptr<CargoService>);
    void CreateCargo(CreateCargoMsg* msg);
    void Delay(int cargoId, int days);

private:
    std::shared_ptr<CargoService> cargoService_;
};
}
#endif //BC_DEMO_API_H
