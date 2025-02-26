#include "di-container.h"

DIContainer* DIContainer::_instance = nullptr;

DIContainer::DIContainer() {}

DIContainer::~DIContainer() {}

DIContainer *DIContainer::getInstance()
{
    if(DIContainer::_instance == nullptr)
    {
        DIContainer::_instance = new DIContainer();
    }

    return DIContainer::_instance;
}

void DIContainer::registerLogicMethods(bool (*loginMethod)(char*, char*))
{
    this->_loginMethod = loginMethod;
}

DIContainerResult DIContainer::invokeLogic(unsigned int logicMethodId, int numArgs, ...)
{
    va_list args;
    va_start(args, numArgs);

    switch (logicMethodId) {
    case 0:
        if(numArgs >= 2)
        {
            try
            {
                char* login = va_arg(args, char*);
                char* password = va_arg(args, char*);
                bool result = this->_loginMethod(login, password);
            }
            catch(std::exception ex)
            {
                // Log here
            }
        }

        break;
    default:
        break;
    }

    va_end(args);

    return DIContainerResult();
}
