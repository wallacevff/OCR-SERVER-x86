/*
 *  This file was autogen'd by xtractprotos, v. 1.0
 */
#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

extern GPLOT * gplotCreate ( const char *rootname, l_int32 outformat, const char *title, const char *xlabel, const char *ylabel );
extern void gplotDestroy ( GPLOT **pgplot );
extern l_int32 gplotAddPlot ( GPLOT *gplot, NUMA *nax, NUMA *nay, l_int32 plotstyle, const char *plottitle );
extern l_int32 gplotSetScaling ( GPLOT *gplot, l_int32 scaling );
extern l_int32 gplotMakeOutput ( GPLOT *gplot );
extern l_int32 gplotGenCommandFile ( GPLOT *gplot );
extern l_int32 gplotGenDataFiles ( GPLOT *gplot );
extern l_int32 gplotSimple1 ( NUMA *na, l_int32 outformat, const char *outroot, const char *title );
extern l_int32 gplotSimple2 ( NUMA *na1, NUMA *na2, l_int32 outformat, const char *outroot, const char *title );
extern l_int32 gplotSimpleN ( NUMAA *naa, l_int32 outformat, const char *outroot, const char *title );
extern GPLOT * gplotRead ( const char *filename );
extern l_int32 gplotWrite ( const char *filename, GPLOT *gplot );
extern NUMA * numaCreate ( l_int32 n );
extern void numaDestroy ( NUMA **pna );
extern NUMA * numaCopy ( NUMA *na );
extern NUMA * numaClone ( NUMA *na );
extern l_int32 numaEmpty ( NUMA *na );
extern l_int32 numaAddNumber ( NUMA *na, l_float32 val );
extern l_int32 numaExtendArray ( NUMA *na );
extern l_int32 numaInsertNumber ( NUMA *na, l_int32 index, l_float32 val );
extern l_int32 numaRemoveNumber ( NUMA *na, l_int32 index );
extern l_int32 numaGetCount ( NUMA *na );
extern l_int32 numaGetFValue ( NUMA *na, l_int32 index, l_float32 *pval );
extern l_int32 numaGetIValue ( NUMA *na, l_int32 index, l_int32 *pival );
extern l_int32 numaSetValue ( NUMA *na, l_int32 index, l_float32 val );
extern l_int32 * numaGetIArray ( NUMA *na );
extern l_float32 * numaGetFArray ( NUMA *na );
extern l_int32 numaGetRefcount ( NUMA *na );
extern l_int32 numaChangeRefcount ( NUMA *na, l_int32 delta );
extern l_int32 numaGetMax ( NUMA *na, l_float32 *pmaxval, l_int32 *pimaxloc );
extern l_int32 numaGetMin ( NUMA *na, l_float32 *pminval, l_int32 *piminloc );
extern l_int32 numaGetSum ( NUMA *na, l_float32 *psum );
extern NUMA * numaGetPartialSums ( NUMA *na );
extern l_int32 numaGetSumOnInterval ( NUMA *na, l_int32 first, l_int32 last, l_float32 *psum );
extern l_int32 numaFitMax ( NUMA *na, l_float32 *pmaxval, NUMA *naloc, l_float32 *pmaxloc );
extern NUMA * numaInterpolate ( NUMA *nas, l_int32 startval, l_int32 incr, l_int32 size );
extern NUMA * numaSort ( NUMA *naout, NUMA *nain, l_int32 sortorder );
extern NUMA * numaGetSortIndex ( NUMA *na, l_int32 sortorder );
extern NUMA * numaSortByIndex ( NUMA *nas, NUMA *naindex );
extern l_int32 numaGetMedian ( NUMA *na, l_float32 *pval );
extern l_int32 numaGetMode ( NUMA *na, l_float32 *pval, l_int32 *pcount );
extern NUMA * numaTransform ( NUMA *nas, l_float32 shift, l_float32 scale );
extern NUMA * numaConvertToInt ( NUMA *nas );
extern NUMA * numaMakeHistogram ( NUMA *na, l_int32 maxbins, l_int32 *pbinsize, l_int32 *pbinstart );
extern NUMA * numaMakeHistogramClipped ( NUMA *na, l_int32 binsize, l_int32 maxsize );
extern NUMA * numaRebinHistogram ( NUMA *nas, l_int32 newsize );
extern NUMA * numaNormalizeHistogram ( NUMA *nas, l_float32 area );
extern l_int32 numaHistogramGetRankFromVal ( NUMA *na, l_int32 startval, l_int32 binsize, l_float32 rval, l_float32 *prank );
extern l_int32 numaHistogramGetValFromRank ( NUMA *na, l_int32 startval, l_int32 binsize, l_float32 rank, l_float32 *prval );
extern NUMA * numaConvolve ( NUMA *na, l_int32 halfwidth );
extern NUMA * numaFindPeaks ( NUMA *nas, l_int32 nmax, l_float32 fract1, l_float32 fract2 );
extern NUMA * numaFindExtrema ( NUMA *nas, l_int32 delta );
extern NUMA * numaMakeSequence ( l_float32 startval, l_float32 increment, l_int32 size );
extern l_int32 numaGetNonzeroRange ( NUMA *na, l_int32 *pfirst, l_int32 *plast );
extern NUMA * numaClipToInterval ( NUMA *nas, l_int32 first, l_int32 last );
extern l_int32 numaJoin ( NUMA *nad, NUMA *nas, l_int32 istart, l_int32 iend );
extern NUMA * numaRead ( const char *filename );
extern NUMA * numaReadStream ( FILE *fp );
extern l_int32 numaWrite ( const char *filename, NUMA *na );
extern l_int32 numaWriteStream ( FILE *fp, NUMA *na );
extern NUMAA * numaaCreate ( l_int32 n );
extern void numaaDestroy ( NUMAA **pnaa );
extern l_int32 numaaAddNuma ( NUMAA *naa, NUMA *na, l_int32 copyflag );
extern l_int32 numaaExtendArray ( NUMAA *naa );
extern l_int32 numaaGetCount ( NUMAA *naa );
extern l_int32 numaaGetNumberCount ( NUMAA *naa );
extern NUMA * numaaGetNuma ( NUMAA *naa, l_int32 index, l_int32 accessflag );
extern l_int32 numaaReplaceNuma ( NUMAA *naa, l_int32 index, NUMA *na );
extern l_int32 numaaAddNumber ( NUMAA *naa, l_int32 index, l_float32 val );
extern NUMA2D * numa2dCreate ( l_int32 nrows, l_int32 ncols, l_int32 initsize );
extern void numa2dDestroy ( NUMA2D **pna2d );
extern l_int32 numa2dAddNumber ( NUMA2D *na2d, l_int32 row, l_int32 col, l_float32 val );
extern l_int32 numa2dGetCount ( NUMA2D *na2d, l_int32 row, l_int32 col );
extern NUMA * numa2dGetNuma ( NUMA2D *na2d, l_int32 row, l_int32 col );
extern l_int32 numa2dGetFValue ( NUMA2D *na2d, l_int32 row, l_int32 col, l_int32 index, l_float32 *pval );
extern l_int32 numa2dGetIValue ( NUMA2D *na2d, l_int32 row, l_int32 col, l_int32 index, l_int32 *pval );
extern NUMAHASH * numaHashCreate ( l_int32 nbuckets, l_int32 initsize );
extern void numaHashDestroy ( NUMAHASH **pnahash );
extern NUMA * numaHashGetNuma ( NUMAHASH *nahash, l_uint32 key );
extern l_int32 numaHashAdd ( NUMAHASH *nahash, l_uint32 key, l_float32 value );
extern SARRAY * sarrayCreate ( l_int32 n );
extern SARRAY * sarrayCreateWordsFromString ( const char *string );
extern SARRAY * sarrayCreateLinesFromString ( char *string, l_int32 blankflag );
extern void sarrayDestroy ( SARRAY **psa );
extern SARRAY * sarrayCopy ( SARRAY *sa );
extern SARRAY * sarrayClone ( SARRAY *sa );
extern l_int32 sarrayAddString ( SARRAY *sa, char *string, l_int32 copyflag );
extern l_int32 sarrayExtendArray ( SARRAY *sa );
extern char * sarrayRemoveString ( SARRAY *sa, l_int32 index );
extern l_int32 sarrayClear ( SARRAY *sa );
extern l_int32 sarrayGetCount ( SARRAY *sa );
extern char ** sarrayGetArray ( SARRAY *sa, l_int32 *pnalloc, l_int32 *pn );
extern char * sarrayGetString ( SARRAY *sa, l_int32 index, l_int32 copyflag );
extern l_int32 sarrayGetRefcount ( SARRAY *sa );
extern l_int32 sarrayChangeRefcount ( SARRAY *sa, l_int32 delta );
extern char * sarrayToString ( SARRAY *sa, l_int32 addnlflag );
extern char * sarrayToStringRange ( SARRAY *sa, l_int32 first, l_int32 nstrings, l_int32 addnlflag );
extern l_int32 sarrayConcatenate ( SARRAY *sa1, SARRAY *sa2 );
extern SARRAY * sarrayConvertWordsToLines ( SARRAY *sa, l_int32 linesize );
extern l_int32 sarraySplitString ( SARRAY *sa, const char *str, const char *separators );
extern SARRAY * sarraySort ( SARRAY *saout, SARRAY *sain, l_int32 sortorder );
extern l_int32 stringCompareLexical ( const char *str1, const char *str2 );
extern SARRAY * sarrayRead ( const char *filename );
extern SARRAY * sarrayReadStream ( FILE *fp );
extern l_int32 sarrayWrite ( const char *filename, SARRAY *sa );
extern l_int32 sarrayWriteStream ( FILE *fp, SARRAY *sa );
extern l_int32 sarrayAppend ( const char *filename, SARRAY *sa );
extern l_int32 l_errorInt ( const char *msg, const char *procname, l_int32 ival );
extern l_float32 l_errorFloat ( const char *msg, const char *procname, l_float32 fval );
extern void * l_errorPtr ( const char *msg, const char *procname, void *pval );
extern void l_errorVoid ( const char *msg, const char *procname );
extern void l_warning ( const char *msg, const char *procname );
extern void l_warningInt ( const char *msg, const char *procname, l_int32 ival );
extern void l_info ( const char *msg, const char *procname );
extern void l_infoInt ( const char *msg, const char *procname, l_int32 ival );
extern void l_infoInt2 ( const char *msg, const char *procname, l_int32 ival1, l_int32 ival2 );
extern void l_infoFloat ( const char *msg, const char *procname, l_float32 fval );
extern void l_infoFloat2 ( const char *msg, const char *procname, l_float32 fval1, l_float32 fval2 );
extern char * stringNew ( const char *src );
extern l_int32 stringReplace ( char **pdest, const char *src );
extern char * stringJoin ( const char *src1, const char *src2 );
extern char * strtokSafe ( char *cstr, const char *seps, char **psaveptr );
extern char * stringRemoveChars ( const char *src, const char *remchars );
extern char * stringReplaceSubstr ( const char *src, const char *sub1, const char *sub2, l_int32 *pfound, l_int32 *ploc );
extern char * stringReplaceEachSubstr ( const char *src, const char *sub1, const char *sub2, l_int32 *pcount );
extern l_int32 arrayFindSequence ( const l_uint8 *data, l_int32 datalen, const l_uint8 *sequence, l_int32 seqlen, l_int32 *poffset, l_int32 *pfound );
extern void * reallocNew ( void **pindata, l_int32 oldsize, l_int32 newsize );
extern l_uint8 * arrayRead ( const char *fname, l_int32 *pnbytes );
extern l_uint8 * arrayReadStream ( FILE *fp, l_int32 *pnbytes );
extern l_int32 nbytesInFile ( FILE *fp );
extern l_int32 arrayWrite ( const char *filename, const char *operation, void *data, l_int32 nbytes );
extern l_uint16 convertOnLittleEnd16 ( l_uint16 shortin );
extern l_uint16 convertOnBigEnd16 ( l_uint16 shortin );
extern l_uint32 convertOnLittleEnd32 ( l_uint32 wordin );
extern l_uint32 convertOnBigEnd32 ( l_uint32 wordin );
extern FILE * fopenReadStream ( const char *filename );
extern l_int32 splitPathAtDirectory ( const char *pathname, char **pdir, char **ptail );
extern l_int32 splitPathAtExtension ( const char *pathname, char **pbasename, char **pextension );
extern char * genPathname ( const char *dir, const char *fname );
extern void startTimer ( void );
extern l_float32 stopTimer ( void );

#ifdef __cplusplus
}
#endif  /* __cplusplus */
