// MFCexp5_1View.h : interface of the CMFCexp5_1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCEXP5_1VIEW_H__1699E799_9371_40A3_AA4A_470FA8C63E6C__INCLUDED_)
#define AFX_MFCEXP5_1VIEW_H__1699E799_9371_40A3_AA4A_470FA8C63E6C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCexp5_1View : public CView
{
protected: // create from serialization only
	CMFCexp5_1View();
	DECLARE_DYNCREATE(CMFCexp5_1View)

// Attributes
public:
	CMFCexp5_1Doc* GetDocument();
		

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCexp5_1View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCexp5_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCexp5_1View)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCexp5_1View.cpp
inline CMFCexp5_1Doc* CMFCexp5_1View::GetDocument()
   { return (CMFCexp5_1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXP5_1VIEW_H__1699E799_9371_40A3_AA4A_470FA8C63E6C__INCLUDED_)