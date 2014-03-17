/*****************************************************************************
 * $Workfile: Slave.h $
 * $Revision: 2 $
 * $Modtime: 4/21/00 1:14a $
 * $Author: Etb $
 ******************************************************************************
 *
 *	COPYRIGHT (C) 1999 CMG NEDERLAND B.V. - ALL RIGHTS RESERVED
 *
 ******************************************************************************/

#ifndef SLAVE_H
#define SLAVE_H

////////////////////////////////////////////////////////////////////////////////
// class ExprResult
class Slave
{
public:

	///////////////////////////////////////////////////////////////////////////////
	// constructor of Slave
	///////////////////////////////////////////////////////////////////////////////
	Slave();

	///////////////////////////////////////////////////////////////////////////////
	// destructor of Slave
	///////////////////////////////////////////////////////////////////////////////
	~Slave();

	///////////////////////////////////////////////////////////////////////////////
	// function		: constructor slave
	//
	// description	: Creates slave obejct
	//				  	
	// parameters	: int 					slave id
	//				  string				slave name
	//				  int 					slave status
	//				  int 					slave mode
	//				  
	// returns		: <void>
	//				  
	///////////////////////////////////////////////////////////////////////////////
	Slave(const int nID, const string strName, const int nMode, const int nStatus);

	///////////////////////////////////////////////////////////////////////////////
	// function		: SetID
	//
	// description	: Sets slave ID
	//				  	
	// parameters	: nID					slave id
	//
	// returns		: <void>
	//				  
	///////////////////////////////////////////////////////////////////////////////
	void SetID (const int nID)
	{ m_nID = nID; };
	
	///////////////////////////////////////////////////////////////////////////////
	// function		: GetID
	//
	// description	: Gets slave ID
	//				  	
	// parameters	: None
	//
	// returns		: nID					slave id
	//				  
	///////////////////////////////////////////////////////////////////////////////
	int  GetID ()
	{ return m_nID; };

	///////////////////////////////////////////////////////////////////////////////
	// function		: SetStatus
	//
	// description	: Sets slave status
	//				  	
	// parameters	: nStatus				slave status
	//
	// returns		: <void>
	//				  
	///////////////////////////////////////////////////////////////////////////////
	void SetStatus (const int nStatus)
	{ m_nStatus = nStatus; };

	///////////////////////////////////////////////////////////////////////////////
	// function		: GetID
	//
	// description	: Gets slave ID
	//				  	
	// parameters	: None
	//
	// returns		: nID					slave id
	//				  
	///////////////////////////////////////////////////////////////////////////////
	int GetStatus ()
	{ return m_nStatus; };

	///////////////////////////////////////////////////////////////////////////////
	// function		: SetMode
	//
	// description	: Sets slave mode
	//				  	
	// parameters	: nMode					slave mode
	//
	// returns		: <void>
	//				  
	///////////////////////////////////////////////////////////////////////////////
	void SetMode (const int nMode)
	{ m_nMode = nMode; };

	///////////////////////////////////////////////////////////////////////////////
	// function		: GetMode
	//
	// description	: Gets slave mode
	//				  	
	// parameters	: None
	//
	// returns		: nID					slave id
	//				  
	///////////////////////////////////////////////////////////////////////////////
	int GetMode()
	{ return m_nMode; };

	///////////////////////////////////////////////////////////////////////////////
	// function		: SetName
	//
	// description	: Sets slave name
	//				  	
	// parameters	: strName				slave name
	//
	// returns		: <void>
	//				  
	///////////////////////////////////////////////////////////////////////////////
	void SetName (const string& strName)
	{ m_strName = strName; };

	///////////////////////////////////////////////////////////////////////////////
	// function		: GetName
	//
	// description	: Gets slave name
	//				  	
	// parameters	: None
	//
	// returns		: string&					slave name
	//				  
	///////////////////////////////////////////////////////////////////////////////
	string& GetName()
	{ return m_strName; };


private:
	int		m_nID;					//	Slave ID
	int		m_nStatus;				//  Slave status
	int		m_nMode;				//  Slave mode
	string	m_strName;				//  Slave name

public:
	// Constants
	enum STATII	{ READY, BUSY };
	enum MODE		{ SYNC, ASYNC };
};

#endif // !SLAVE_H

