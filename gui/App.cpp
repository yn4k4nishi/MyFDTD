#include "App.hpp"
#include "Frame.hpp"

bool MyApp::OnInit(){
    if ( !wxApp::OnInit() ) return false;

    MyFrame *frame = new MyFrame("My FDTD");
    frame->Show(true);

    return true;
}