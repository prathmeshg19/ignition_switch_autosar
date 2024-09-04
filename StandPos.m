classdef StandPos < Simulink.IntEnumType
    enumeration
        stowed(0)
        unstowed(1)
    end
    methods (Static)
        function retVal = getDefaultValue()
            retVal = StandPos.stowed;
        end
    end
     methods (Static = true)

          function retVal = getHeaderFile()

             retVal = 'Rte_Type.h';

          end

    end
end
