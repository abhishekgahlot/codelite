#ifndef CLANGCODECOMPLETION_H
#define CLANGCODECOMPLETION_H

#include <wx/event.h>
#include "asyncprocess.h"
#include <map>

class IEditor;
class IManager;

/**
 * @class ClangCodeCompletion
 * @author eran
 * @date 07/18/10
 * @file clang_code_completion.h
 * @brief codelite's interface to clang's code completion
 */
class ClangCodeCompletion : public wxEvtHandler
{

	static ClangCodeCompletion* ms_instance;
	IManager *                  m_manager;
	IProcess*                   m_process;
	wxString                    m_output;
	std::map<wxString,wxString> m_backticks;

public:
	static ClangCodeCompletion* Instance();
	static void Release();
	void Initialize(IManager *manager);
	/**
	 * @brief perform code completion
	 * @param editor
	 */
	void CodeComplete(IEditor *editor);

protected:
	wxArrayString GetStandardIncludePathsArgs();

protected:
	DECLARE_EVENT_TABLE()
	void OnProcessTerminated(wxCommandEvent &e);
	void OnProcessOutput    (wxCommandEvent &e);

private:
	ClangCodeCompletion();
	~ClangCodeCompletion();
};

#endif // CLANGCODECOMPLETION_H
