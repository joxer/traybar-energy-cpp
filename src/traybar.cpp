#include "../lib/traybar.h"


TaskBar::TaskBar(): t(this, 1000)  {
  SetIcon(wxIcon(wxT("magic.xpm")));
  
  t.Start(5000);
  
}


BEGIN_EVENT_TABLE(TaskBar, wxTaskBarIcon)
 EVT_TIMER(1000, TaskBar::OnTimer)
END_EVENT_TABLE()

wxMenu *TaskBar::CreatePopupMenu(){
  
  wxMenu *menu = new wxMenu;
  menu->Append(3, wxT("&Restore TBTest"));
  menu->Append(2,wxT("&Set New Icon"));
  menu->Append(1,    wxT("E&xit"));

  return menu;
    
  
};


void TaskBar::OnTimer(wxTimerEvent& event){

  char *t = system("echo ciao");

}
