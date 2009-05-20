#include "src/traybar.cpp"

class App: public wxApp{



  virtual bool OnInit(){

    TaskBar *t = new TaskBar();
    //    t->Show(true);
  }


};
IMPLEMENT_APP(App);
