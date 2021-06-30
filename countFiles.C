// countFiles.C

#include <iostream>
#include <fstream>
#include "TString.h"
#include "TTree.h"
#include "TBranch.h"
#include "TFile.h"
#include <TTree.h>
#include <TChain.h>
#include "TCanvas.h"
#include "THStack.h"
#include "TMath.h"
#include "TLegend.h"
#include "TH1.h"
#include "TLorentzVector.h"
using namespace std;

void countFiles()
{
  ifstream inFile("full_input_list.txt");
  string filename;
  int count = 0;
  while (getline(inFile,filename))
    {
      count = count + 1;
    }

  cout << "You have "<< count << " files" << endl;
}
