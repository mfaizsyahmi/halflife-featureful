
class CTriggerPlayerInput : public CBaseToggle
{
public:
	void Spawn( void );
	void Use( CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value );
	virtual int	ObjectCaps( void );
	void Input( CBaseEntity *pActivator, const char *pValue );
	bool CalcRatio( CBaseEntity *pLocus, float *outResult );
	void UnsetThink( void );
	void TimeoutThink( void );
};
