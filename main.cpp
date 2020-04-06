#include <stdio.h>
#include <iostream>
#include "RrConfig.h"

int main()
{
	rr::RrConfig config;
	config.ReadConfig("config.ini");
	std::string HostName = config.ReadString("MYSQL", "HostName", "");
	int Port = config.ReadInt("MYSQL", "Port", 0);
	std::string UserName = config.ReadString("MYSQL", "UserName", "");

	std::cout << "HostName=" << HostName << std::endl;
	std::cout << "Port=" << Port << std::endl;
	std::cout << "UserName=" << UserName << std::endl;

	return 0;
}