Sub ButtonY_Click()

    Dim begCol, begRow, curCol, curRow, begNewCol, begNewRow, curNewCol, curNewRow, linecount, runcount, maxcount As Integer
    Dim strCurrentCell, strSecondCell, strNewCell, strCurrentBuild, strDateCell As String
        
    '=== variable initialization ===
    begCol = 4
    begRow = 8
    linecount = 0
    runcount = 0
    begNewCol = 7
    begNewRow = 8
    maxcount = 1024
    
    '=== current row is the only value that changes
    curCol = begCol
    curRow = begRow
    curNewCol = begNewCol
    curNewRow = begNewRow
    
    '=== loop until both current and second cells are null ===
    Do While ((Cells(curRow, curCol) <> "ZZZZZZZ") And (runcount < maxcount))
        
        '=== Constructing variable length multi-line cell
        runcount = runcount + 1
        
        '=== first and second cell construction
        If Cells(curRow, curCol - 1) <> "" Then
           strDateCell = Cells(curRow, curCol - 1)
           strCurrentCell = Cells(curRow, curCol)
           strSecondCell = Cells(curRow + 1, curCol)
           Cells(curRow + 1, curCol + 1) = "x"

           strNewCell = strCurrentCell + " " + strSecondCell
           
           strCurrentBuild = strNewCell
           linecount = 1
                 
        '===  a variable new line addition
        ElseIf Cells(curRow, curCol + 1) = "x" Then              ' this should have an x from the previous step
           strCurrentCell = strCurrentBuild                            ' this should be where the current construction resides
           
           If Cells(curRow + 1, curCol - 1) = "" Then              ' make sure we're not looking into the next block
              strSecondCell = Cells(curRow + 1, curCol)
              Cells(curRow + 1, curCol + 1) = "x"
              
              ' make sure we don't add the eol indicator
              If strSecondCell = "ZZZZZZZ" Then
                 strNewCell = strCurrentCell
              ElseIf strSecondCell <> "ZZZZZZZ" Then
                 strNewCell = strCurrentCell + " " + strSecondCell
              End If
                            
              strCurrentBuild = strNewCell
              linecount = linecount + 1
              
            ElseIf Cells(curRow + 1, curCol - 1) <> "" Then      'we should be at the end of a block at this point
               Cells(curNewRow, curNewCol) = strDateCell
               Cells(curNewRow, curNewCol + 1) = strCurrentBuild
               curNewRow = curNewRow + 1
               linecount = 0
               
            End If
        
        End If
          
        curRow = curRow + 1
        
    Loop

End Sub
