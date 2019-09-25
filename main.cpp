#include "iostream"
using namespace std;
#include "mscl/mscl.h"
#include "getCurrentConfig.h"
#include "parseData.h"
#include "setCurrentConfig.h"
#include "startSampling.h"
#include "setToIdle.h"


int main(int argc, char **argv)
{
    //TODO: Change the COM_PORT to match the setup
    const string COM_PORT = "/dev/ttyACM1";

    try
    {
        //create a SerialConnection with the COM port
        mscl::Connection connection = mscl::Connection::Serial(COM_PORT);

        //create an InertialNode with the connection
        mscl::InertialNode node(connection);

        cout << "Node Information: " << endl;
        cout << "Model Name: " << node.modelName() << endl;
        cout << "Model Number: " << node.modelNumber() << endl;
        cout << "Serial: " << node.serialNumber() << endl;
        cout << "Firmware: " << node.firmwareVersion().str() << endl << endl;

        //Example: Start Sampling
        cout<< "start the sampling";
        startSampling(node);
        cout<< "sampling ended";

        //Example: Parse Data
        cout << "Parsing data starts";
        parseData(node);
        cout << "Parsing data ends";
    }
    catch(mscl::Error& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}
