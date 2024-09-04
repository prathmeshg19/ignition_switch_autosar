classdef CurrentGear < Simulink.IntEnumType
    enumeration
        neutral(0)
        first(1)
        second(2)
        third(3)
        fourth(4)
        fifth(5)
        sixth(6)
    end
    methods (Static)
        function retVal = getDefaultValue()
            retVal = CurrentGear.neutral;
        end
    end
        methods (Static = true)

          function retVal = getHeaderFile()

             retVal = 'Rte_Type.h';

          end

    end
end
