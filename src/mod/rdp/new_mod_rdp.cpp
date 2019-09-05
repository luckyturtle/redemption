/*
This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

Product name: redemption, a FLOSS RDP proxy
Copyright (C) Wallix 2010-2018
Author(s): Jonathan Poelen
*/

#include "mod/rdp/new_mod_rdp.hpp"
#include "mod/rdp/rdp.hpp"


std::unique_ptr<mod_api> new_mod_rdp(
    Transport& trans,
    SessionReactor& session_reactor,
    gdi::GraphicApi& gd,
    FrontAPI& front,
    const ClientInfo& info,
    RedirectionInfo& redir_info,
    Random& gen,
    TimeObj& timeobj,
    ChannelsAuthorizations channels_authorizations,
    const ModRDPParams& mod_rdp_params,
    AuthApi& authentifier,
    ReportMessageApi& report_message,
    ModRdpVariables vars,
    RDPMetrics * metrics,
    FileValidatorService * file_validator_service
)
{
    return std::make_unique<mod_rdp>(
        trans, session_reactor, gd, front, info, redir_info, gen, timeobj,
        std::move(channels_authorizations), mod_rdp_params, authentifier,
        report_message, vars, metrics, file_validator_service);
}