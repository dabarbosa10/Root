// Example of Root Tformula class:

{
	TCanvas *c1= new TCanvas("c1", "c1",1500,500);
	c1->Divide(3,1); //Three columns and one row
	c1-> cd(1);
	f1=new TF1("f1","sin(x)",0,5);
	f1->SetLineColor(kBlue+2);
	f1->SetTitle("Func1; X Axis Title; Y(miles)");
	f1->Draw();

	c1->cd(2);	
	f2=new TF1("f2", "cos(x)", 0,5);
	f2->SetLineColor(kRed);	
	f2->SetTitle("Other Func; X(t); Y(m) ");
	f2->Draw();

	c1->cd(3);
	f3=new TF2("f3","10*cos(x)*sin(y)",-3,3,0,10);
	f3->Draw();
}