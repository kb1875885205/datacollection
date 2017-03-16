#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <cstdio>

#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <algorithm> //max...
#include <utility> //pair
#include <complex>
#include <climits> //int, ll...
#include <limits> //double...
#include <cmath> //abs, atan...

#include <cstring> //memset
#include <string>

using namespace std;

typedef long long ll;

typedef pair<int,int> ii;
typedef pair<ll, ll> ll_ll;
typedef vector<int> vi;
typedef map<int, int> mii;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<vi> vvi;

string asdf[500] = {
		"11111000000000000000000000000001",
		"11101100000000000000000000000001",
		"11101001000000000000000000000001",
		"11101000010000000000000000000001",
		"11101000000100000000000000000001",
		"11101000000001000000000000000001",
		"11101000000000010000000000000001",
		"11101000000000000100000000000001",
		"11101000000000000001000000000001",
		"11101000000000000000010000000001",
		"11101000000000000000000100000001",
		"11101000000000000000000001000001",
		"11101000000000000000000000010001",
		"11101000000000000000000000000101",
		"10111100000000000000000000000001",
		"10111001000000000000000000000001",
		"10111000010000000000000000000001",
		"10111000000100000000000000000001",
		"10111000000001000000000000000001",
		"10111000000000010000000000000001",
		"10111000000000000100000000000001",
		"10111000000000000001000000000001",
		"10111000000000000000010000000001",
		"10111000000000000000000100000001",
		"10111000000000000000000001000001",
		"10111000000000000000000000010001",
		"10111000000000000000000000000101",
		"10101101000000000000000000000001",
		"10101100010000000000000000000001",
		"10101100000100000000000000000001",
		"10101100000001000000000000000001",
		"10101100000000010000000000000001",
		"10101100000000000100000000000001",
		"11100110000000000000000000000001",
		"11100011000000000000000000000001",
		"11100010010000000000000000000001",
		"11100010000100000000000000000001",
		"11100010000001000000000000000001",
		"11100010000000010000000000000001",
		"11100010000000000100000000000001",
		"11100010000000000001000000000001",
		"11100010000000000000010000000001",
		"11100010000000000000000100000001",
		"11100010000000000000000001000001",
		"11100010000000000000000000010001",
		"11100010000000000000000000000101",
		"10110110000000000000000000000001",
		"10110011000000000000000000000001",
		"10110010010000000000000000000001",
		"10110010000100000000000000000001",
		"10110010000001000000000000000001",
		"10110010000000010000000000000001",
		"10110010000000000100000000000001",
		"10110010000000000001000000000001",
		"10110010000000000000010000000001",
		"10110010000000000000000100000001",
		"10110010000000000000000001000001",
		"10110010000000000000000000010001",
		"10110010000000000000000000000101",
		"10100111000000000000000000000001",
		"10100110010000000000000000000001",
		"10100110000100000000000000000001",
		"10100110000001000000000000000001",
		"10100110000000010000000000000001",
		"10100110000000000100000000000001",
		"11100001100000000000000000000001",
		"11100000110000000000000000000001",
		"11100000100100000000000000000001",
		"11100000100001000000000000000001",
		"11100000100000010000000000000001",
		"11100000100000000100000000000001",
		"11100000100000000001000000000001",
		"11100000100000000000010000000001",
		"11100000100000000000000100000001",
		"11100000100000000000000001000001",
		"11100000100000000000000000010001",
		"11100000100000000000000000000101",
		"10110100100000000000000000000001",
		"10110001100000000000000000000001",
		"10110000110000000000000000000001",
		"10110000100100000000000000000001",
		"10110000100001000000000000000001",
		"10110000100000010000000000000001",
		"10110000100000000100000000000001",
		"10110000100000000001000000000001",
		"10110000100000000000010000000001",
		"10110000100000000000000100000001",
		"10110000100000000000000001000001",
		"10110000100000000000000000010001",
		"10110000100000000000000000000101",
		"10100101100000000000000000000001",
		"10100100110000000000000000000001",
		"10100100100100000000000000000001",
		"10100100100001000000000000000001",
		"10100100100000010000000000000001",
		"10100100100000000100000000000001",
		"11100000011000000000000000000001",
		"11100000001100000000000000000001",
		"11100000001001000000000000000001",
		"11100000001000010000000000000001",
		"11100000001000000100000000000001",
		"11100000001000000001000000000001",
		"11100000001000000000010000000001",
		"11100000001000000000000100000001",
		"11100000001000000000000001000001",
		"11100000001000000000000000010001",
		"11100000001000000000000000000101",
		"10110100001000000000000000000001",
		"10110001001000000000000000000001",
		"10110000011000000000000000000001",
		"10110000001100000000000000000001",
		"10110000001001000000000000000001",
		"10110000001000010000000000000001",
		"10110000001000000100000000000001",
		"10110000001000000001000000000001",
		"10110000001000000000010000000001",
		"10110000001000000000000100000001",
		"10110000001000000000000001000001",
		"10110000001000000000000000010001",
		"10110000001000000000000000000101",
		"10100101001000000000000000000001",
		"10100100011000000000000000000001",
		"10100100001100000000000000000001",
		"10100100001001000000000000000001",
		"10100100001000010000000000000001",
		"10100100001000000100000000000001",
		"11100000000110000000000000000001",
		"11100000000011000000000000000001",
		"11100000000010010000000000000001",
		"11100000000010000100000000000001",
		"11100000000010000001000000000001",
		"11100000000010000000010000000001",
		"11100000000010000000000100000001",
		"11100000000010000000000001000001",
		"11100000000010000000000000010001",
		"11100000000010000000000000000101",
		"10110100000010000000000000000001",
		"10110001000010000000000000000001",
		"10110000010010000000000000000001",
		"10110000000110000000000000000001",
		"10110000000011000000000000000001",
		"10110000000010010000000000000001",
		"10110000000010000100000000000001",
		"10110000000010000001000000000001",
		"10110000000010000000010000000001",
		"10110000000010000000000100000001",
		"10110000000010000000000001000001",
		"10110000000010000000000000010001",
		"10110000000010000000000000000101",
		"10100101000010000000000000000001",
		"10100100010010000000000000000001",
		"10100100000110000000000000000001",
		"10100100000011000000000000000001",
		"10100100000010010000000000000001",
		"10100100000010000100000000000001",
		"11100000000001100000000000000001",
		"11100000000000110000000000000001",
		"11100000000000100100000000000001",
		"11100000000000100001000000000001",
		"11100000000000100000010000000001",
		"11100000000000100000000100000001",
		"11100000000000100000000001000001",
		"11100000000000100000000000010001",
		"11100000000000100000000000000101",
		"10110100000000100000000000000001",
		"10110001000000100000000000000001",
		"10110000010000100000000000000001",
		"10110000000100100000000000000001",
		"10110000000001100000000000000001",
		"10110000000000110000000000000001",
		"10110000000000100100000000000001",
		"10110000000000100001000000000001",
		"10110000000000100000010000000001",
		"10110000000000100000000100000001",
		"10110000000000100000000001000001",
		"10110000000000100000000000010001",
		"10110000000000100000000000000101",
		"10100101000000100000000000000001",
		"10100100010000100000000000000001",
		"10100100000100100000000000000001",
		"10100100000001100000000000000001",
		"10100100000000110000000000000001",
		"10100100000000100100000000000001",
		"11100000000000011000000000000001",
		"11100000000000001100000000000001",
		"11100000000000001001000000000001",
		"11100000000000001000010000000001",
		"11100000000000001000000100000001",
		"11100000000000001000000001000001",
		"11100000000000001000000000010001",
		"11100000000000001000000000000101",
		"10110100000000001000000000000001",
		"10110001000000001000000000000001",
		"10110000010000001000000000000001",
		"10110000000100001000000000000001",
		"10110000000001001000000000000001",
		"10110000000000011000000000000001",
		"10110000000000001100000000000001",
		"10110000000000001001000000000001",
		"10110000000000001000010000000001",
		"10110000000000001000000100000001",
		"10110000000000001000000001000001",
		"10110000000000001000000000010001",
		"10110000000000001000000000000101",
		"10100101000000001000000000000001",
		"10100100010000001000000000000001",
		"10100100000100001000000000000001",
		"10100100000001001000000000000001",
		"10100100000000011000000000000001",
		"10100100000000001100000000000001",
		"11100000000000000110000000000001",
		"11100000000000000011000000000001",
		"11100000000000000010010000000001",
		"11100000000000000010000100000001",
		"11100000000000000010000001000001",
		"11100000000000000010000000010001",
		"11100000000000000010000000000101",
		"10110100000000000010000000000001",
		"10110001000000000010000000000001",
		"10110000010000000010000000000001",
		"10110000000100000010000000000001",
		"10110000000001000010000000000001",
		"10110000000000010010000000000001",
		"10110000000000000110000000000001",
		"10110000000000000011000000000001",
		"10110000000000000010010000000001",
		"10110000000000000010000100000001",
		"10110000000000000010000001000001",
		"10110000000000000010000000010001",
		"10110000000000000010000000000101",
		"10100101000000000010000000000001",
		"10100100010000000010000000000001",
		"10100100000100000010000000000001",
		"10100100000001000010000000000001",
		"10100100000000010010000000000001",
		"10100100000000000110000000000001",
		"11100000000000000001100000000001",
		"11100000000000000000110000000001",
		"11100000000000000000100100000001",
		"11100000000000000000100001000001",
		"11100000000000000000100000010001",
		"11100000000000000000100000000101",
		"10110100000000000000100000000001",
		"10110001000000000000100000000001",
		"10110000010000000000100000000001",
		"10110000000100000000100000000001",
		"10110000000001000000100000000001",
		"10110000000000010000100000000001",
		"10110000000000000100100000000001",
		"10110000000000000001100000000001",
		"10110000000000000000110000000001",
		"10110000000000000000100100000001",
		"10110000000000000000100001000001",
		"10110000000000000000100000010001",
		"10110000000000000000100000000101",
		"10100101000000000000100000000001",
		"10100100010000000000100000000001",
		"10100100000100000000100000000001",
		"10100100000001000000100000000001",
		"10100100000000010000100000000001",
		"10100100000000000100100000000001",
		"11100000000000000000011000000001",
		"11100000000000000000001100000001",
		"11100000000000000000001001000001",
		"11100000000000000000001000010001",
		"11100000000000000000001000000101",
		"10110100000000000000001000000001",
		"10110001000000000000001000000001",
		"10110000010000000000001000000001",
		"10110000000100000000001000000001",
		"10110000000001000000001000000001",
		"10110000000000010000001000000001",
		"10110000000000000100001000000001",
		"10110000000000000001001000000001",
		"10110000000000000000011000000001",
		"10110000000000000000001100000001",
		"10110000000000000000001001000001",
		"10110000000000000000001000010001",
		"10110000000000000000001000000101",
		"10100101000000000000001000000001",
		"10100100010000000000001000000001",
		"10100100000100000000001000000001",
		"10100100000001000000001000000001",
		"10100100000000010000001000000001",
		"10100100000000000100001000000001",
		"11100000000000000000000110000001",
		"11100000000000000000000011000001",
		"11100000000000000000000010010001",
		"11100000000000000000000010000101",
		"10110100000000000000000010000001",
		"10110001000000000000000010000001",
		"10110000010000000000000010000001",
		"10110000000100000000000010000001",
		"10110000000001000000000010000001",
		"10110000000000010000000010000001",
		"10110000000000000100000010000001",
		"10110000000000000001000010000001",
		"10110000000000000000010010000001",
		"10110000000000000000000110000001",
		"10110000000000000000000011000001",
		"10110000000000000000000010010001",
		"10110000000000000000000010000101",
		"10100101000000000000000010000001",
		"10100100010000000000000010000001",
		"10100100000100000000000010000001",
		"10100100000001000000000010000001",
		"10100100000000010000000010000001",
		"10100100000000000100000010000001",
		"11100000000000000000000001100001",
		"11100000000000000000000000110001",
		"11100000000000000000000000100101",
		"10110100000000000000000000100001",
		"10110001000000000000000000100001",
		"10110000010000000000000000100001",
		"10110000000100000000000000100001",
		"10110000000001000000000000100001",
		"10110000000000010000000000100001",
		"10110000000000000100000000100001",
		"10110000000000000001000000100001",
		"10110000000000000000010000100001",
		"10110000000000000000000100100001",
		"10110000000000000000000001100001",
		"10110000000000000000000000110001",
		"10110000000000000000000000100101",
		"10100101000000000000000000100001",
		"10100100010000000000000000100001",
		"10100100000100000000000000100001",
		"10100100000001000000000000100001",
		"10100100000000010000000000100001",
		"10100100000000000100000000100001",
		"11100000000000000000000000011001",
		"11100000000000000000000000001101",
		"10110100000000000000000000001001",
		"10110001000000000000000000001001",
		"10110000010000000000000000001001",
		"10110000000100000000000000001001",
		"10110000000001000000000000001001",
		"10110000000000010000000000001001",
		"10110000000000000100000000001001",
		"10110000000000000001000000001001",
		"10110000000000000000010000001001",
		"10110000000000000000000100001001",
		"10110000000000000000000001001001",
		"10110000000000000000000000011001",
		"10110000000000000000000000001101",
		"10100101000000000000000000001001",
		"10100100010000000000000000001001",
		"10100100000100000000000000001001",
		"10100100000001000000000000001001",
		"10100100000000010000000000001001",
		"10100100000000000100000000001001",
		"11100000000000000000000000000111",
		"10110100000000000000000000000011",
		"10110001000000000000000000000011",
		"10110000010000000000000000000011",
		"10110000000100000000000000000011",
		"10110000000001000000000000000011",
		"10110000000000010000000000000011",
		"10110000000000000100000000000011",
		"10110000000000000001000000000011",
		"10110000000000000000010000000011",
		"10110000000000000000000100000011",
		"10110000000000000000000001000011",
		"10110000000000000000000000010011",
		"10110000000000000000000000000111",
		"10100101000000000000000000000011",
		"10100100010000000000000000000011",
		"10100100000100000000000000000011",
		"10100100000001000000000000000011",
		"10100100000000010000000000000011",
		"10100100000000000100000000000011",
		"10011110000000000000000000000001",
		"10011011000000000000000000000001",
		"10011010010000000000000000000001",
		"10011010000100000000000000000001",
		"10011010000001000000000000000001",
		"10011010000000010000000000000001",
		"10011010000000000100000000000001",
		"10011010000000000001000000000001",
		"10011010000000000000010000000001",
		"10011010000000000000000100000001",
		"10011010000000000000000001000001",
		"10011010000000000000000000010001",
		"10011010000000000000000000000101",
		"10001111000000000000000000000001",
		"10001110010000000000000000000001",
		"10001110000100000000000000000001",
		"10001110000001000000000000000001",
		"10001110000000010000000000000001",
		"10001110000000000100000000000001",
		"10011001100000000000000000000001",
		"10011000110000000000000000000001",
		"10011000100100000000000000000001",
		"10011000100001000000000000000001",
		"10011000100000010000000000000001",
		"10011000100000000100000000000001",
		"10011000100000000001000000000001",
		"10011000100000000000010000000001",
		"10011000100000000000000100000001",
		"10011000100000000000000001000001",
		"10011000100000000000000000010001",
		"10011000100000000000000000000101",
		"10001101100000000000000000000001",
		"10001100110000000000000000000001",
		"10001100100100000000000000000001",
		"10001100100001000000000000000001",
		"10001100100000010000000000000001",
		"10001100100000000100000000000001",
		"10011000011000000000000000000001",
		"10011000001100000000000000000001",
		"10011000001001000000000000000001",
		"10011000001000010000000000000001",
		"10011000001000000100000000000001",
		"10011000001000000001000000000001",
		"10011000001000000000010000000001",
		"10011000001000000000000100000001",
		"10011000001000000000000001000001",
		"10011000001000000000000000010001",
		"10011000001000000000000000000101",
		"10001101001000000000000000000001",
		"10001100011000000000000000000001",
		"10001100001100000000000000000001",
		"10001100001001000000000000000001",
		"10001100001000010000000000000001",
		"10001100001000000100000000000001",
		"10011000000110000000000000000001",
		"10011000000011000000000000000001",
		"10011000000010010000000000000001",
		"10011000000010000100000000000001",
		"10011000000010000001000000000001",
		"10011000000010000000010000000001",
		"10011000000010000000000100000001",
		"10011000000010000000000001000001",
		"10011000000010000000000000010001",
		"10011000000010000000000000000101",
		"10001101000010000000000000000001",
		"10001100010010000000000000000001",
		"10001100000110000000000000000001",
		"10001100000011000000000000000001",
		"10001100000010010000000000000001",
		"10001100000010000100000000000001",
		"10011000000001100000000000000001",
		"10011000000000110000000000000001",
		"10011000000000100100000000000001",
		"10011000000000100001000000000001",
		"10011000000000100000010000000001",
		"10011000000000100000000100000001",
		"10011000000000100000000001000001",
		"10011000000000100000000000010001",
		"10011000000000100000000000000101",
		"10001101000000100000000000000001",
		"10001100010000100000000000000001",
		"10001100000100100000000000000001",
		"10001100000001100000000000000001",
		"10001100000000110000000000000001",
		"10001100000000100100000000000001",
		"10011000000000011000000000000001",
		"10011000000000001100000000000001",
		"10011000000000001001000000000001",
		"10011000000000001000010000000001",
		"10011000000000001000000100000001",
		"10011000000000001000000001000001",
		"10011000000000001000000000010001",
		"10011000000000001000000000000101",
		"10001101000000001000000000000001",
		"10001100010000001000000000000001",
		"10001100000100001000000000000001",
		"10001100000001001000000000000001",
		"10001100000000011000000000000001",
		"10001100000000001100000000000001",
		"10011000000000000110000000000001",
		"10011000000000000011000000000001",
		"10011000000000000010010000000001",
		"10011000000000000010000100000001",
		"10011000000000000010000001000001",
		"10011000000000000010000000010001",
		"10011000000000000010000000000101",
		"10001101000000000010000000000001",
		"10001100010000000010000000000001",
		"10001100000100000010000000000001",
		"10001100000001000010000000000001",
		"10001100000000010010000000000001",
		"10001100000000000110000000000001",
		"10011000000000000001100000000001",
		"10011000000000000000110000000001",
		"10011000000000000000100100000001",
		"10011000000000000000100001000001",
		"10011000000000000000100000010001",
		"10011000000000000000100000000101",
		"10001101000000000000100000000001",
		"10001100010000000000100000000001",
		"10001100000100000000100000000001",
		"10001100000001000000100000000001",
		"10001100000000010000100000000001",
		"10001100000000000100100000000001",
		"10011000000000000000011000000001",
		"10011000000000000000001100000001",
		"10011000000000000000001001000001",
		"10011000000000000000001000010001",
		"10011000000000000000001000000101"
};

string small[50] ={
		"1111100000000001",
		"1110110000000001",
		"1110100100000001",
		"1110100001000001",
		"1110100000010001",
		"1110100000000101",
		"1011110000000001",
		"1011100100000001",
		"1011100001000001",
		"1011100000010001",
		"1011100000000101",
		"1110011000000001",
		"1110001100000001",
		"1110001001000001",
		"1110001000010001",
		"1110001000000101",
		"1011011000000001",
		"1011001100000001",
		"1011001001000001",
		"1011001000010001",
		"1011001000000101",
		"1110000110000001",
		"1110000011000001",
		"1110000010010001",
		"1110000010000101",
		"1011010010000001",
		"1011000110000001",
		"1011000011000001",
		"1011000010010001",
		"1011000010000101",
		"1110000001100001",
		"1110000000110001",
		"1110000000100101",
		"1011010000100001",
		"1011000100100001",
		"1011000001100001",
		"1011000000110001",
		"1011000000100101",
		"1110000000011001",
		"1110000000001101",
		"1011010000001001",
		"1011000100001001",
		"1011000001001001",
		"1011000000011001",
		"1011000000001101",
		"1110000000000111",
		"1011010000000011",
		"1011000100000011",
		"1011000001000011",
		"1011000000010011"

};
int magic[9] = {3, 2, 3, 2, 7, 2, 3, 2, 3};

bool check (string s){
	//"1110110000000001",
	int res, mul;
	for (int i =2 ; i<=10; i++){
		res = 1;
		mul = 1;
		for (int j = s.size()-2 ; j>=0; j--){
			mul *= i;
			mul %= magic[i-2];
			res = (res + mul*(s[j]-'0'))%magic[i-2];
		}
		if (res != 0){
			cout << i;
			return false;
		}
	}
	return true;

}

int main (){
	//int t, n, a;
	//cin >> t >> n >> a;
	int t, n, a;
	cin >> t >> n >> a;
	cout << "Case #1:" << endl;
	if (n == 16){
		for (int i =0; i<50; i++){
			//if (check(small[i])){
				cout << small[i];
				for (int j = 0; j<9; j++){
					cout << " " << magic[j];
				}
			/*}
			else
				cout << "========= ERROR ===========" << endl;
			*/
			cout << endl;

		}

	}
	else{
		for (int i =0; i<500; i++){
			//if (check(asdf[i])){
				cout << asdf[i];
				for (int j = 0; j<9; j++){
					cout << " " << magic[j];
				}
			/*}
			else
				cout << "========= ERROR ===========" << endl;
			*/
			cout << endl;
		}
	}
/*
	int cont = 0;
	vector<string> jc(50, "1000000000000001");

	bool salir = false;
	const int SEMI_I = 7, SQRT = 11, NUM = 50;
	vector<string> aux(SQRT, "0000000");

	for (int i = 0 ; i<SEMI_I && !salir; i++){
		for (int j=i+1; j<SEMI_I && !salir; j++){
				aux[cont][i] = aux[cont][j] = '1';
				cont++;
				if (cont == SQRT) salir = true;
		}
	}
	cont = 0;
	salir = false;
	for (int i = 0 ; i<SQRT && !salir; i++){
		for (int j=i; j<SQRT && !salir; j++){
			for (int k=0; k<SEMI_I*2; k++){
				if (k & 1)
					jc[cont][k+1] = aux[i][k/2];
				else
					jc[cont][k+1] = aux[j][k/2];
			}
			cont++;
			if (cont == NUM) salir = true;
		}
	}
	for (int i = 0 ; i<NUM; i++){
		cout << "\""<< jc[i] << "\"" << ", " << endl;
	}
*/
	return 0;
}