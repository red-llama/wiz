#ifndef WIZ_FORMAT_GB_FORMAT_H
#define WIZ_FORMAT_GB_FORMAT_H

#include <wiz/format/format.h>
#include <wiz/utility/fwd_unique_ptr.h>

namespace wiz {
    class GameBoyFormat : public Format {
        public:
            GameBoyFormat();
            ~GameBoyFormat() override;

            bool generate(Report* report, StringView outputName, const Config& config, const std::vector<std::unique_ptr<Bank>>& banks, std::vector<std::uint8_t>& data) override;
    };
}

#endif