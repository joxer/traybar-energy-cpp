#include <wx/wx.h>
#include <wx/taskbar.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/string.h>
#include <wx/utils.h>
#include <wx/timer.h>



class TaskBar: public wxTaskBarIcon{

  wxTimer t;

public:
  TaskBar();
  virtual wxMenu *CreatePopupMenu();
  void OnLeftButtonDClick(wxTaskBarIconEvent&);
  void OnTimer(wxTimerEvent& event);
  DECLARE_EVENT_TABLE();
};
