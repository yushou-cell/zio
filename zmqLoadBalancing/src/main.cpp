#include "head.hpp"

int main(int argc, char **argv)
{
    Log_MQ mq(argv[0]);
    zmqMiddle middle(Singleton::getInstance().getInstance().GetConf());
    middle.start();
    return 0;
}