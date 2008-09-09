///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "editcmpfileinfobase.h"

///////////////////////////////////////////////////////////////////////////

EditCmpFileInfoBase::EditCmpFileInfoBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxSize( -1,-1 ) );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("File type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	fgSizer1->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlFileType = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrlFileType, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Handle file has:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	fgSizer1->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_choiceFileTypeIsChoices[] = { wxT("Source"), wxT("Resource") };
	int m_choiceFileTypeIsNChoices = sizeof( m_choiceFileTypeIsChoices ) / sizeof( wxString );
	m_choiceFileTypeIs = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceFileTypeIsNChoices, m_choiceFileTypeIsChoices, 0 );
	m_choiceFileTypeIs->SetSelection( 0 );
	fgSizer1->Add( m_choiceFileTypeIs, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Compilation line:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	fgSizer1->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	fgSizer1->Add( 0, 0, 1, wxEXPAND, 5 );
	
	bSizer1->Add( fgSizer1, 0, wxEXPAND, 5 );
	
	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_RICH2|wxTE_WORDWRAP );
	m_textCtrl2->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 76, 90, 90, false, wxEmptyString ) );
	m_textCtrl2->SetMinSize( wxSize( 600,-1 ) );
	
	bSizer1->Add( m_textCtrl2, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonHelp = new wxButton( this, wxID_ANY, wxT("Help..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_buttonHelp, 0, wxALL, 5 );
	
	m_buttonOk = new wxButton( this, wxID_OK, wxT("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonOk->SetDefault(); 
	bSizer2->Add( m_buttonOk, 0, wxALL, 5 );
	
	m_buttonCancel = new wxButton( this, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_buttonCancel, 0, wxALL, 5 );
	
	bSizer1->Add( bSizer2, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_textCtrlFileType->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( EditCmpFileInfoBase::OnFileTypeText ), NULL, this );
	m_textCtrl2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( EditCmpFileInfoBase::OnCompilationLine ), NULL, this );
	m_buttonHelp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditCmpFileInfoBase::OnButtonHelp ), NULL, this );
	m_buttonOk->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditCmpFileInfoBase::OnButtonOk ), NULL, this );
	m_buttonOk->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( EditCmpFileInfoBase::OnButtonOkUI ), NULL, this );
	m_buttonCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditCmpFileInfoBase::OnButtonCancel ), NULL, this );
}

EditCmpFileInfoBase::~EditCmpFileInfoBase()
{
	// Disconnect Events
	m_textCtrlFileType->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( EditCmpFileInfoBase::OnFileTypeText ), NULL, this );
	m_textCtrl2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( EditCmpFileInfoBase::OnCompilationLine ), NULL, this );
	m_buttonHelp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditCmpFileInfoBase::OnButtonHelp ), NULL, this );
	m_buttonOk->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditCmpFileInfoBase::OnButtonOk ), NULL, this );
	m_buttonOk->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( EditCmpFileInfoBase::OnButtonOkUI ), NULL, this );
	m_buttonCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditCmpFileInfoBase::OnButtonCancel ), NULL, this );
}
