#include <cstdio>
#include <print>
#include <stdint.h>

/**
    Goal: Make a binary data packet to simulate streamed TCP/IP market data

    Packet Structure
    
    -------------------------------------------------------------------------------------------
    |Time(of transaction)| COMPANY(4 chars) | BUY/SELL |  AMOUNT | UNIT PRICE | TOTAL PRICE |

    -------------------------------------------------------------------------------------------
    |      4 bytes       |     4 bytes      |  1 byte  | 4 bytes |  4 bytes   |   4 bytes   |
    -------------------------------------------------------------------------------------------

    total bytes per payload: 21 Bytes

**/

class binary_packet{
    private:
	uint32_t  time_since_unix_epoch_of_transaction;
	char company_name[4];
	bool buy;	
	uint32_t ammount;	
	uint32_t unit_price_point;//fixed point, last 2 digits represent cents
	uint32_t total_price_point;//fixed point, last 2 digits represent cents
    public:
	//constructor todo
	
	void serialize_and_transmit(){
	    

	    return;

	}
	
    
};

int main(int argc, char** argv){
    uint32_t sim_world_time;
    int packets_per_second = 10000;
    int time_to_simulate_seconds = 60;

    for(int time = 0; time<time_to_simulate_seconds; time++){
	for (int packet = 0; packet < packets_per_second; packet++){
	    
	    
	}

    }
    
    
    
    
    std::print("Hello World, I am Producer\n");
    return 0;
}
