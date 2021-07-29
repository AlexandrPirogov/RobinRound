#pragma once

#include "wx/wx.h"
#include "cMain.h"

class cApp : public wxApp
{
public:
	cApp();
	~cApp();
	int tick_time;
	int min_exe;
	int max_exe;
	int min_tasks;
	int max_tasks;
	int min_task_units;
	int max_task_units;

private:
	cMain* m_frame1 = nullptr;
public:
	virtual bool OnInit();
};

