#ifndef DI_CONTAINER_H
#define DI_CONTAINER_H


#include "di-container-result.h"

class DIContainer
{
private:
    bool (*_loginMethod)(char*, char*);

    static DIContainer* _instance;

    DIContainer();

    ~DIContainer();

    DIContainer(const DIContainer&) = delete;

    DIContainer& operator=(const DIContainer&) = delete;
public:
    static DIContainer* getInstance();

    void registerLogicMethods(bool (*loginMethod)(char*, char*));

    DIContainerResult invokeLogic(unsigned int logicMethodId, int numArgs, ...);
};

#endif // DI_CONTAINER_H
