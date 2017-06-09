#include <iostream>
#include <stdio.h>
using namespace std;

#include "wtapp.h"
#include "user_data.h"
#include <Wt/WApplication>
#include <Wt/WEnvironment>
using namespace Wt;


WApplication * createApp(const WEnvironment & env)
{
	return new WtApp(env);
}

int main(int argc, char * argv[])
{

	return WRun(argc, argv, createApp);
}
