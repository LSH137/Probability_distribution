#include "Riostream.h"
#include <stdio.h>

void Graph()
{
    auto C = new TCanvas("percent","percent",1200, 600);
    TFile *f = new TFile("percemt.root", "RECREATE");
    TGraph *gPercent = new TGraph();

    int n;
    long double p;
    FILE* fp_data;

    fp_data = fopen64("p.txt", "r");

    if(fp_data != NULL)
    {
        while(!feof(fp_data))
        {
            fscanf(fp_data, "%d %Lf", &n, &p);
            gPercent -> SetPoint(gPercent->GetN(), n, p);
        }

        gPercent -> SetTitle("percent by n");
        gPercent -> SetMarkerStyle(34);
        gPercent -> SetMarkerColor(2);
        gPercent -> SetLineColor(3);
        gPercent -> Draw("APL");
        C->SaveAs("percent.png");

        f -> Write();
    }

}