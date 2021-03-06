// Builds a polar graph in a square Canvas.

void macro3(){
    TCanvas* c = new TCanvas("myCanvas","myCanvas",600,600);
    double rmin=0;
    double rmax=TMath::Pi()*6;
    const int npoints=1000;
    Double_t r[npoints];
    Double_t theta[npoints];
    for (Int_t ipt = 0; ipt < npoints; ipt++) {
        r[ipt] = ipt*(rmax-rmin)/npoints+rmin;
        theta[ipt] = TMath::Sin(r[ipt]);
    }
    TGraphPolar grP1 (npoints,r,theta);
    grP1.SetTitle("A Fan");
    grP1.SetLineWidth(3);
    grP1.SetLineColor(2);
    grP1.DrawClone("AOL");
}
