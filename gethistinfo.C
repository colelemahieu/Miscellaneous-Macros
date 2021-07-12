// gethistinfo.C

#include <iostream>
#include <fstream>
#include "TString.h"
#include "TTree.h"
#include "TBranch.h"
#include "TFile.h"
#include <TROOT.h>
#include <TStyle.h>
#include <TLine.h>
#include <TTree.h>
#include <TChain.h>
#include <TLatex.h>
#include "TCanvas.h"
#include "TMath.h"
#include "TLegend.h"
#include "TH1.h"
#include "TF1.h"
#include "TPad.h"
#include "TLorentzVector.h"
using namespace std;

void gethistinfo()
{
  // Retrieve histograms
  TFile *file = new TFile("hist_SL_rebin2.root");
  TH1F *h_mc = (TH1F*)file->Get("h3");
  TFile *file2 = new TFile("hist_data_rebin2.root");
  TH1F *h_data = (TH1F*)file2->Get("h3");

  cout << "MC has range " << h_mc->GetXaxis()->GetXmin() << " to " << h_mc->GetXaxis()->GetXmax() << endl;
  cout << "Data has range " << h_data->GetXaxis()->GetXmin() << " to " << h_data->GetXaxis()->GetXmax() << endl;

  cout << "MC has " << h_mc->GetNbinsX() << " bins" << endl;
  cout << "Data has " << h_data->GetNbinsX() << " bins" << endl;
}
