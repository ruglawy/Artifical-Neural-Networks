#pragma once
#include "NeuralScreen.h"
#include "MyForm5.h"
#include "OK.h"
#include <vector>
#include <vector>
#include <windows.h>
#include <objidl.h>
#include <gdiplus.h>
using namespace Gdiplus;
using namespace std;
#pragma comment (lib,"Gdiplus.lib")

public class Param {

public: static vector<int> layer0;
public: static vector<int> layer1;
public: static vector<int> layer2;
public: static vector<int> layer3;
public: static int result;

};