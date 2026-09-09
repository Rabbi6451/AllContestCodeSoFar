#include <iostream>
#define e endl
#define max 1000000.0
#define tr_ti transmission_time
#define pr_ti propagation_time
#define msg_b message_bits
#define b_bps bandwidth_bps
#define ds_m distance_m
#define pro_s processing_s
using namespace std;

int main()
{
    double message_bits = 10 * max * 8;   
    double bandwidth_bps = 2 * max;         
    double distance_m = 15000 * 1000.0;         
    double speed_light = 3e8;                    
    double queuing_s = 0.020;                  
    double processing_s = 0.002;                  

    double tr_ti = msg_b / b_bps;
    double pr_ti  = ds_m / speed_light;
    double latency = pr_ti+tr_ti+queuing_s+pro_s;

    cout<<"Transmission time= "<<tr_ti<<" s"<<e;
    cout<<"Propagation time = "<<pr_ti<<" s"<<e;
    cout<<"Total latency= "<<latency<<" s"<<e;

}